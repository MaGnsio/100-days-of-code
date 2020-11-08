//https://codeforces.com/group/Rv2Qzg0DgK/contest/286457/problem/C
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

ll gcd (ll a, ll b)
{
	if (b == 0) return a;
	return gcd (b, a % b);
}
ll lcm (ll a, ll b)
{
	return (a / gcd (a, b)) * b;
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	ll a, b;
	cin >> a >> b;
	cout << gcd (a, b) << " " << lcm (a, b);
}
