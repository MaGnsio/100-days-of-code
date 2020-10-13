//https://codeforces.com/problemset/problem/1150/B
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int n;
	cin >> n;
	char a[n][n];
	for (auto& rows : a)
	{
		for (auto& elem : rows)
		{
			cin >> elem;
		}
	}
	if (a[0][0] == '.' || a[0][n - 1] == '.' || a[n - 1][0] == '.' || a[n - 1][n - 1] == '.')
	{
		cout << "NO";
		return 0;
	}
	else
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (a[i][j] == '.' && a[i - 1][j] == '.' && a[i + 1][j] == '.' && a[i][j - 1] == '.' && a[i][j + 1] == '.')
				{
					a[i][j] = '#';
					a[i - 1][j] = '#';
					a[i + 1][j] = '#';
					a[i][j - 1] = '#';
					a[i][j + 1] = '#';
				}
			}
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (a[i][j] == '.')
				{
					cout << "NO";
					return 0;
				}
			}
		}
		cout << "YES";
	}
}
