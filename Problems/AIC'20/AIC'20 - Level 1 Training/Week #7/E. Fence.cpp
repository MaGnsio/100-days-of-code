//https://codeforces.com/group/Rv2Qzg0DgK/contest/285699/problem/E
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
	ll n, k, c = 1, s = 0, mn = 0;
	cin >> n >> k;
	ll a[n];
	for (auto& elem : a) cin >> elem;
	for (ll i = 0; i < k; ++i) s += a[i];
	mn = s;
	for(ll i = k; i < n; ++i)
	{
		s -= a[i - k];
		s += a[i];
		if(s < mn)
		{
			mn = s;
			c = i - k + 2;
        	}
	}
	cout << c << "\n";
}
