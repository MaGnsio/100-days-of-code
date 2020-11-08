//https://codeforces.com/group/Rv2Qzg0DgK/contest/270964/problem/Y
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
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	ll last1 = ((a % 10) * (b % 10) * (c % 10) * (d % 10)) % 10;
	ll last2 = ((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100;
	if (last1 != last2) cout << last2;
	else cout << 0 << last1;
}
