//https://codeforces.com/contest/1419/problem/A
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

void solve ()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	if (n % 2)
	{
		for (int i = 0; i < n; i += 2)
		{	
			if (s[i] % 2)
			{
				cout << 1 << "\n";
				return;
			}
		}
		cout << 2 << "\n";
		return;
	}
	else
	{
		for (int i = 1; i < n; i += 2)
		{
			if (!(s[i] % 2))
			{
				cout << 2 << "\n";
				return;
			}
		}
		cout << 1 << "\n";
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
