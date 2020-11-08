//https://codeforces.com/group/Rv2Qzg0DgK/contest/272491/problem/Y
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
	ll n, q;
	cin >> n >> q;
	vector<ll> v(n);
	for (auto& elem : v) cin >> elem;
	for (ll i = 0; i < n; ++i) v[i] += v[i - 1];
	while (q--)
	{
		ll l, r;
		cin >> l >> r;
		cout << v[r - 1] - v[l - 2] << "\n";
	}
}
