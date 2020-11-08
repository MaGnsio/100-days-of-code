//https://codeforces.com/group/Rv2Qzg0DgK/contest/271445/problem/Y
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
	ll n, fib1 = 0, fib2 = 1;
	cin >> n;
	if (n >= 1) cout << fib1 << " ";
	if (n >= 2) cout << fib2 << " ";
	n -= 2;
	while (n-- && n >= 0)
	{
		ll temp = fib1 + fib2;
		fib1 = fib2;
		fib2 = temp;
		cout << fib2 << " ";
	}
}
