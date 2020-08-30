//https://codeforces.com/problemset/problem/1354/A
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

void solve ()
{
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a <= b)
	{
		cout << b << "\n";
		return;
	}
	else if (c <= d)
	{	
		cout << -1 << "\n";
		return;
	}
	else
	{
		ll n = ((a - b) / (c - d)) + ((a - b) % (c - d) == 0 ? 0 : 1);
		cout << b + (n * c) << "\n";
		return;
	}
}

int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int t;
	cin >> t;
	while (t--)
	{
		solve ();
	}
}
