//https://codeforces.com/problemset/problem/1330/A
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
		int n, x;
		cin >> n >> x;
		bool farr[210] = {};
		for (int i = 1; i <= n; ++i)
		{
			int y;
			cin >> y;
			farr[y] = true;
		}
		int i = 1, v = 0;
		while (x)
		{
			if (!farr[i])
			{
				x--;
				farr[i] = true;
			}
			v++;
			i++;
			if (!x)
			{
				while (farr[i])
				{
					v++;
					i++;
				}
			}
		}
		cout << v << "\n";
	}
}
