//https://codeforces.com/group/Rv2Qzg0DgK/contest/285699/problem/F
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
	ll n, k;
	cin >> n >> k;
	vector<pair<ll, ll>> v1(n + 1);
	vector<ll> v2(n + 1), v3(n + 1);
	for (ll i = 1; i <= n; ++i) cin >> v1[i].S;
	for (ll i = 1; i <= n; ++i) cin >> v1[i].F;
	v2[0] = 0, v3[0] = 0;
	for (ll i = 1; i <= n; ++i) v2[i] = (v1[i].S + v2[i - 1]);
	for (ll i = 1; i <= n; ++i)
	{
		if (v1[i].F == 1) v3[i] = v1[i].S + v3[i - 1];
		else v3[i] = v3[i - 1];
	}
	ll ans = v2[k] + (v3[n] - v3[k]);
	for (ll i = 2; i <= n - k + 1; ++i)
	{
		//normal segment (1, i - 1) --> secret technique segment (i, i + k - 1) --> normal segment (i + k, n)
		ans = max (ans,	(v3[i - 1] - v3[0]) + (v2[i + k - 1] - v2[i - 1]) + (v3[n] - v3[i + k - 1]));
	}
	cout << ans;
}
