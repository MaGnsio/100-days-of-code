//https://codeforces.com/contest/52/problem/B
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
	ll n, m, ans = 0;
	cin >> n >> m;
	int a[n][m] = {}, b[n] = {}, c[m] = {};
	for (ll i = 0; i < n; ++i)
	{
		for (ll j = 0; j < m; ++j)
		{
			char x;
			cin >> x;
			if (x == '*')
			{
				a[i][j] = 1;
				b[i]++;
				c[j]++;
			}
		}
	}
	for (ll i = 0; i < n; ++i)
	{
		for (ll j = 0; j < m; ++j)
		{
			if (a[i][j])
			{
				ans += ((b[i] - 1) * (c[j] - 1));
			}
		}
	}
	cout << ans;
}
