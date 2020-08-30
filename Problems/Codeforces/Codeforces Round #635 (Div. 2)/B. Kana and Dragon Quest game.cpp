//https://codeforces.com/problemset/problem/1337/B
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

void solve ()
{
   	int x, n, m;
	cin >> x >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		if (x > 10)
		{
			x = (x / 2) + 10;
		}
		if (x <= 0)
		{
			cout << "YES\n";
			return;
		}
	}
	for (int i = 0; i < m; ++i)
	{
		x -= 10;
		if (x <= 0)
		{
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
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
