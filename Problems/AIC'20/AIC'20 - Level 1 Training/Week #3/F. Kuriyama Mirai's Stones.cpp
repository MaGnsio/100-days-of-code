//https://codeforces.com/group/Rv2Qzg0DgK/contest/272489/problem/F
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
	ll n, m;
	cin >> n;
	vector<ll> v1(n);
	for (auto& elem : v1) cin >> elem;
	vector<ll> v2(v1);
	sort (v2.begin (), v2.end ());
	for (ll i = 0; i < n; ++i)
	{
		v1[i] += v1[i - 1], v2[i] += v2[i - 1];
	}
	cin >> m;
	while (m--)
	{
		ll t, l, r, ans = 0;
		cin >> t >> l >> r;
		if (t == 1) cout << v1[r - 1] - v1[l - 2] << "\n";
		else cout << v2[r - 1] - v2[l - 2] << "\n";
	}

}
