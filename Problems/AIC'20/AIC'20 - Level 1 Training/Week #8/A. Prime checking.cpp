//https://codeforces.com/group/Rv2Qzg0DgK/contest/286457/problem/A
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
	ll n;
	cin >> n;
	if (n < 2)
	{
		cout << "NO";
		return 0;
	}
	if (n == 2 || n == 3)
	{
		cout << "YES";
		return 0;
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		cout << "NO";
		return 0;
	}
	for (ll i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}
