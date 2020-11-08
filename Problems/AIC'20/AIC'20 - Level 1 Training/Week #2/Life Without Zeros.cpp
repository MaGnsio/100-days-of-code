//https://codeforces.com/group/Rv2Qzg0DgK/contest/271444/problem/D
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

ll dz (ll x)
{
	ll y = 0, l = 1;
	while (x)
	{
		if (x % 10)
		{
			y += (x % 10) * l;
			l *= 10;
		}
		x /= 10;
	}
	return y;
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	ll a, b;
	cin >> a >> b;
	cout << (dz (a) + dz (b) == dz (a + b) ? "YES" : "NO");
	
}
