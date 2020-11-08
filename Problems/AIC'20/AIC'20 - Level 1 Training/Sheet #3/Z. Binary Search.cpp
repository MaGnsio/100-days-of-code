//https://codeforces.com/group/Rv2Qzg0DgK/contest/272491/problem/Z
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
	sort (v.begin (), v.end ());
	while (q--)
	{
		ll x;
		cin >> x;
		if (binary_search (v.begin (), v.end (), x)) cout << "found\n";
		else cout << "not found\n";
	}
}
