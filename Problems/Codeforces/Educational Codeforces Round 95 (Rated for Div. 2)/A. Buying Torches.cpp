//https://codeforces.com/contest/1418/problem/A
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
		ll x, y, k;
		cin >> x >> y >> k;
		ll ans = ((y * k + x + k - 3) / (x - 1)) + k;
		cout << ans << "\n";
	}
}
