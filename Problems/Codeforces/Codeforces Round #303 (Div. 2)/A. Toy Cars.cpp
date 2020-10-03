//https://codeforces.com/problemset/problem/545/A
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
	int n, ctr = 0;
	cin >> n;
	int a[n][n], b[n] = {};
	for (auto& row : a)
	{
		for (auto& elem : row)
		{
			cin >> elem;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (a[i][j] == 1) b[i]++;
			if (a[i][j] == 2) b[j]++;
			if (a[i][j] == 3)
			{
				b[i]++;
				b[j]++;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (!b[i]) ctr++;
	}
	cout << ctr << "\n";
	for (int i = 0; i < n; ++i)
	{
		if (!b[i]) cout << i + 1 << " ";
	}
}
