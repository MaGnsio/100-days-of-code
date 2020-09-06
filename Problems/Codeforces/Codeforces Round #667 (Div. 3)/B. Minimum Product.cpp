//https://codeforces.com/contest/1409/problem/B
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
	int t;
	cin >> t;
	while (t--)
	{
		ll a, b, x, y, n;
		cin >> a >> b >> x >> y >> n;
		ll ans = LLONG_MAX;
		for (int i = 0; i < 2; ++i)
		{
			ll da = min (n, a - x);
			ll db = min (n - da, b - y);
			ans = min (ans, (a - da) * (b - db));
			swap (a, b);
			swap (x, y);
		}
		cout << ans << "\n";
	}
}
