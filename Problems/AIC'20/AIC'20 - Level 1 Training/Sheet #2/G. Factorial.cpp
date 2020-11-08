//https://codeforces.com/group/Rv2Qzg0DgK/contest/271445/problem/G
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
		ll x, fact = 1;
		cin >> x;
		for (ll i = 1; i <= x; ++i) fact *= i;
		cout << fact << "\n";
	}
}
