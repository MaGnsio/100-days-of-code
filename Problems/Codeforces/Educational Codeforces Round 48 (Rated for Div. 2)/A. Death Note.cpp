//https://codeforces.com/problemset/problem/1016/A
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
	ll n, m, r = 0;
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		ll x;
		cin >> x;
		ll t = (x + r) / m;
		r = (x + r) % m;
		cout << t << " ";
	}
}
