//https://codeforces.com/problemset/problem/1279/A
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
		int r, g, b;
		cin >> r >> g >> b;
		int tot = r + g + b;
		int maxe = max ({r, g, b});
		int mine = min ({r, g, b});
		if (maxe - 1 <= mine + (tot - maxe - mine))
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
}
