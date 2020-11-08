//https://codeforces.com/group/Rv2Qzg0DgK/contest/286457/problem/D
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
	ll l, r, m, ans = 1;
	cin >> l >> r >> m;
	for (ll i = l; i <= r; ++i) ans = ((ans % m) * (i % m)) % m;
	cout << ans % m;
}
