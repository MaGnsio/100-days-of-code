//https://codeforces.com/problemset/problem/1291/A
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
		ll n, ctr = 0;
		string s;
		cin >> n >> s;
		char ans[3];
		for (int i = 0; i < n; ++i)
		{
			if ((s[i] - 48) % 2)
			{
				if (ctr == 0)
				{	
					ans[0] = s[i];
				}
				else
				{
					ans[1] = s[i];
				}
				ctr++;
			}
			if (ctr == 2) break;
		}
		if (ctr == 2)
		{
			cout << ans[0] << ans[1] << "\n";
		}
		else
		{
			cout << -1 << "\n";
		}
	}
}
