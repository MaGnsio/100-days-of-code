//https://codeforces.com/problemset/problem/276/A
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
	ll mj = LLONG_MIN;
	for (ll i = 0; i < n; ++i)
	{
		ll f, t;
		cin >> f >> t;
		if (t > k) f = f - (t - k);
		mj = max (mj, f);
	}
	cout << mj;
}
