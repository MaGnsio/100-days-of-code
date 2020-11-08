//https://codeforces.com/group/Rv2Qzg0DgK/contest/285699/problem/A
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
	ll n, ctr = 1, ans = 1;
	cin >> n;
	vector<ll> v1(n), v2;
	for (auto& elem : v1) cin >> elem;
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			v2.push_back (v1[i] + v1[j]);
		}
	}
	sort (v2.begin (), v2.end ());
	for (int i = 1; i < v2.size (); ++i)
	{
		if (v2[i] == v2[i - 1]) ctr++;
		else
		{
			ans = max (ans, ctr);
			ctr = 1;
		}
	}
	cout << ans;
}
