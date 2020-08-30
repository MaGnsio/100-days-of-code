//https://codeforces.com/problemset/problem/1350/A
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int spd (int n)
{
	for (int i = 2; i <= n; ++i)
	{
		if (!(n % i))
		{
			return i;
		}
	}
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int t;
	cin >> t;
	while (t--)
	{
		ll n, k;
		cin >> n >> k;
		//we add n to its spd so its guaranteed that n becomes an even number then the new n's spd is equal to 2
		n += spd (n);
		cout << n + (2 * (k - 1)) << "\n";
	}
}
