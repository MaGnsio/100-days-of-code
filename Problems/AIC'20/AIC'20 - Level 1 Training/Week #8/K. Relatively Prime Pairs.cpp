//https://codeforces.com/group/Rv2Qzg0DgK/contest/286457/problem/K
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
	ll l, r;
	cin >> l >> r;
	cout << "YES\n";
	for (ll i = l; i <= r; i += 2) cout << i << " " << i + 1 << "\n";
}
