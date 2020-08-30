//https://codeforces.com/problemset/problem/1294/A
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

ll mot (ll a, ll b, ll c)
{
	if ((b <= a && a <= c) || (c <= a && a <= b)) {return a;}
	else if ((a <= b && b <= c) || (c <= b && b <= a)) {return b;}
	else {return c;}
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	ll t;
	cin >> t;
	while (t--)
	{
		ll a, b, c, n;
		cin >> a >> b >> c >> n;
		n -= (2 * max (max (a, b), c)) - min (min (a, b), c) - mot (a, b, c);
		if (n >= 0 && n % 3 == 0)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
}
