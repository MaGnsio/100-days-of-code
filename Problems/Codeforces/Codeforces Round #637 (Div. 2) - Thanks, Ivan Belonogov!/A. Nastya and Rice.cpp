//https://codeforces.com/problemset/problem/1341/A
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
		int n, a, b, c, d;
		cin >> n >> a >> b >> c >> d;
		if (n * (a + b) < c - d || n * (a - b) > c + d)
		{
			cout << "NO\n";
		}
		else
		{
			cout << "YES\n";
		}
	}
}
