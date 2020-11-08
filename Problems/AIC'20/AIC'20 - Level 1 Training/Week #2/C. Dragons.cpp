//https://codeforces.com/group/Rv2Qzg0DgK/contest/271444/problem/C
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
	ll s, n;
	cin >> s >> n;
	vector<pair<int, int>> v(n);
	for (auto& elem : v) cin >> elem.F >> elem.S;
	sort (v.begin (), v.end ());
	for (int i = 0; i < n; ++i)
	{
		if (s > v[i].F) s += v[i].S;
		else
		{
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
}
