//https://codeforces.com/problemset/problem/1272/A
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

ll calc (ll a, ll b, ll c)
{
	return abs (a - b) + abs (a - c) + abs (b - c);
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int t;
	cin >> t;
	while (t--)
	{
		ll a, b, c;
		cin >> a >> b >> c;
		ll ans = calc (a, b, c);
		for (ll i = a - 1; i <= a + 1; ++i)
		{
			for (ll j = b - 1; j <= b + 1; ++j)
			{
				for (ll k = c - 1; k <= c + 1; ++k)
				{
					ans = min (ans, calc (i, j, k));
				}
			}
		}
		cout << ans << "\n";
	}
}
