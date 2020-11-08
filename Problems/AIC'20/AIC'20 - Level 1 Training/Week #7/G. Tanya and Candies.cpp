//https://codeforces.com/group/Rv2Qzg0DgK/contest/285699/problem/G
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
	ll n, ans = 0, pre_eve = 0, pre_odd = 0, suf_eve = 0, suf_odd = 0;
	cin >> n;
	vector<ll> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		if (i & 1) suf_eve += v[i];
		else suf_odd += v[i];
	}
	for (ll i = 0; i < n; ++i)
	{
		if (i & 1) suf_eve -= v[i];
		else suf_odd -= v[i];
		if (pre_eve + suf_odd == pre_odd + suf_eve) ans++;
		if (i & 1) pre_eve += v[i];
		else pre_odd += v[i];
	}
	cout << ans;
}
