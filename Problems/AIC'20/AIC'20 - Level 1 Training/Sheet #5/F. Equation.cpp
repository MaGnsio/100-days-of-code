//https://codeforces.com/group/Rv2Qzg0DgK/contest/276233/problem/F
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

ll eq (ll x, ll n)
{
	ll sum = 0, cur = 1;
	while (n > 1)
	{
		cur *= (x * x);
		sum += cur;
		n -= 2;
	}
	return sum;
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	ll x, n;
	cin >> x >> n;
	cout << eq (x, n);
}
