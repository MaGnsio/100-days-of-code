//https://codeforces.com/group/Rv2Qzg0DgK/contest/276233/problem/D
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

bool is_prime (ll n)
{
	if (n <= 1) return false;
	if (n <= 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (ll i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0) return false;
	}
	return true;
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		if (is_prime (n)) cout << "YES\n";
		else cout << "NO\n";
	}
}
