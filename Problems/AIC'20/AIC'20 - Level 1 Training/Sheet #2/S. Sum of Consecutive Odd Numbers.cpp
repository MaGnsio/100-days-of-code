//https://codeforces.com/group/Rv2Qzg0DgK/contest/271445/problem/S
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
		ll a, b, ans = 0;
		cin >> a >> b;
		for (ll i = min (a, b) + 1; i < max (a, b); ++i) i % 2 ? ans += i : NULL;
		cout << ans << "\n";
	}
}
