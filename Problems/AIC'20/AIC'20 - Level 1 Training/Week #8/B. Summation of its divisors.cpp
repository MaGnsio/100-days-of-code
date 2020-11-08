//https://codeforces.com/group/Rv2Qzg0DgK/contest/286457/problem/B
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
	ll n, sum = 0;
	cin >> n;
	for (ll i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
		{
			if (n / i == i) sum += i;
			else sum += (i + (n / i));
		}
	}
	cout << sum + 1 + (n == 1 ? 0 : n);
}
