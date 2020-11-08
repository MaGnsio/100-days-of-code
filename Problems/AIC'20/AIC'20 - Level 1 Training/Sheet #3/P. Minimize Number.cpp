//https://codeforces.com/group/Rv2Qzg0DgK/contest/272491/problem/P
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
	ll n, ans = 1;
	cin >> n;
	ll a[n];
	for (auto& elem : a)
	{
		cin >> elem;
		if (elem % 2)
		{
			cout << 0;
			return 0;
		}
		else elem /= 2;
	}
	while (true)
	{
		ll i = 0, ctr = 0;
		while (i < n)
		{
			if (a[i] % 2) break;
			else
			{
				a[i] /= 2;
				ctr++;
			}
			++i;
		}
		if (ctr == n) ans++;
		else
		{
			cout << ans;
			return 0;
		}
	}
}
