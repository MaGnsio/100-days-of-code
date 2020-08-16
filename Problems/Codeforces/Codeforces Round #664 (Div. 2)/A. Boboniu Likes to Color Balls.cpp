//https://codeforces.com/contest/1395/problem/A
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

void solve ()
{
	int r, g, b ,w;
	cin >> r >> g >> b >> w;
	int c = ((r % 2) + (g % 2) + (b % 2) + (w % 2));
	if (r == 0 || g == 0 || b == 0)
	{
		if(c > 1)
		{
			cout << "NO\n";
		}
		else
		{
			cout << "YES\n";
		}
		
	}
	else
	{
		if (c < 2 || 4 - c < 2)
		{
			cout << "YES\n";
		}	
		else
		{
			cout << "NO\n";
		}
	}
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int t;
	cin >> t;
	while (t)
	{
		solve ();
		t--;
	}
}