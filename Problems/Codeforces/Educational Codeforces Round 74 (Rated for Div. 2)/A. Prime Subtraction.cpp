//https://codeforces.com/problemset/problem/1238/A
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
	int t;
	cin >> t;
	while (t--)
	{
		ll x, y;
		cin >> x >> y;
		if (x - y == 1)
		{	
			cout << "NO\n";
		}
		else
		{
			cout << "YES\n";
		}
	}
}
