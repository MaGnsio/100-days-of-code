//https://codeforces.com/problemset/problem/814/A
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
	int n, k, j;
	cin >> n >> k;
	if (k > 1)
	{
		cout << "YES";
		return 0;
	}
	else
	{
		int a[n], b[k];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			if (a[i] == 0) j = i;
		}
		for (auto& elem : b) cin >> elem;
		a[j] = b[0];
		for (int i = 1; i < n; ++i)
		{
			if (a[i] < a[i - 1])
			{
				cout << "YES";
				return 0;
			}
		}
		cout << "NO";
		return 0;
	}
}
