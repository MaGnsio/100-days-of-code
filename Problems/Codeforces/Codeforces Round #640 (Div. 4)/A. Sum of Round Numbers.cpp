//https://codeforces.com/problemset/problem/1352/A
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
		int n;
		cin >> n;
		int i = 1, j = 1, ctr = 0, x = n;
		while (x != 0)
		{
			int ans = (x % 10) * j;
			if (ans)
			{
				ctr++;
			}
			x /= 10;
			j *= 10;
		}
		cout << ctr << "\n";
		while (n != 0)
		{
			int ans = (n % 10) * i;
			if (ans)
			{
				cout << ans << " ";
			}
			n /= 10;
			i *= 10;
		}
		cout << "\n";
	}
}
