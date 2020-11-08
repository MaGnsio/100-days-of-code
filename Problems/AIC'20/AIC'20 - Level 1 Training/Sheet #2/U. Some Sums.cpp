//https://codeforces.com/group/Rv2Qzg0DgK/contest/271445/problem/U
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

bool chk (ll n, ll a, ll b)
{
	ll digsum = 0;
	while (n)
	{
		digsum += (n % 10);
		n /= 10;
	}
	if (digsum >= a && digsum <= b) return true;
	else return false;
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	ll n, a, b, sum = 0;
	cin >> n >> a >> b;
	for (ll i = 1; i <= n; ++i) chk (i, a, b) ? sum += i : NULL;
	cout << sum;
}
