//https://codeforces.com/problemset/problem/598/A
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

ll tp (ll n)
{
	ll pow2 = 1, tot = 0;
	while (pow2 <= n)
	{
		tot += pow2;
		pow2 *= 2;
	}
	return tot;
}

int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int t;
	cin >> t;
	while (t--)
	{
		ll n, ans = 0;
		cin >> n;
		cout << (n * (n + 1) / 2) - (2 * tp (n)) << "\n";
	}
}
