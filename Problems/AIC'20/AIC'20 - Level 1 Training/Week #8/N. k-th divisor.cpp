//https://codeforces.com/group/Rv2Qzg0DgK/contest/286457/problem/N
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
	vector<ll> v;
	v.push_back (1);
	if (n != 1) v.push_back (n);
	for (ll i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
		{
			v.push_back (i);
			if (i != n / i) v.push_back (n / i);
		}
	}
	if (k > v.size ()) cout << -1;
	else
	{
		sort (v.begin (), v.end ());
		cout << v[k - 1];
	}
}
