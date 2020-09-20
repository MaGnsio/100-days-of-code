//https://codeforces.com/problemset/problem/1282/A
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
		ll a, b, c, r;
		cin >> a >> b >> c >> r;
		ll ls = c - r, rs = c + r;
		ll li = max (ls, min (a, b)), ri = min (rs, max (a, b));
		ll ans = abs (a - b) - max (0ll, ri - li);
		cout << ans << "\n";
	}
}
