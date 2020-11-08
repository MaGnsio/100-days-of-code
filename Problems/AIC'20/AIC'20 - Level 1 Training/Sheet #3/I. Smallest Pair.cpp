//https://codeforces.com/group/Rv2Qzg0DgK/contest/272491/problem/I
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
	int t;
	cin >> t;
	while (t--)
	{
		ll n, ans = LLONG_MAX;
		cin >> n;
		ll a[n];
		for (auto& elem : a) cin >> elem;
		for (ll i = 0; i < n - 1; ++i)
		{
			for (ll j = i + 1; j < n; ++j)
			{
				ans = min (ans, a[j] + a[i] + j - i);
			}
		}
		cout << ans << "\n";
	}
}
