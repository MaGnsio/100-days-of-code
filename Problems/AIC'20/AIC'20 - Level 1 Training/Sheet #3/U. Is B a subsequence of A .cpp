//https://codeforces.com/group/Rv2Qzg0DgK/contest/272491/problem/U
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
	cin >> n >> m;
	vector<ll> v1(n), v2(m);
	for (auto& elem : v1) cin >> elem;
	for (auto& elem : v2) cin >> elem;
	vector<ll>::iterator it = v1.begin ();
	for (ll i = 0; i < m - 1; ++i)
	{
		it = find (it, v1.end (), v2[i]);
		if (find (it + 1, v1.end (), v2[i + 1]) == v1.end ())
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}
