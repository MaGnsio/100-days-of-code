//https://codeforces.com/problemset/problem/318/A
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
	ll n, p;
	cin >> n >> p;
	ll s = n % 2 == 0 ? n / 2 : (n + 1) / 2;
	if (p <= s)
	{
		cout << (p * 2) - 1;
	}
	else
	{
		cout << 2 * (p - s);
	}
}
