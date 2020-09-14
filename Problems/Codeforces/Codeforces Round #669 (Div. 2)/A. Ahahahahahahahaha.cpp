//https://codeforces.com/contest/1407/problem/A
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
		int ctr0 = 0;
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			if (!x) ctr0++;
		}
		int ctr1 = n - ctr0;
		if (ctr0 >= n / 2)
		{
			cout << ctr0 << "\n";
			for (int i = 0; i < ctr0; ++i)
			{
				cout << 0 << " ";
			}
		}
		else
		{
			cout << ctr1 - (ctr1 % 2) << "\n";
			for (int i = 0; i < ctr1 - (ctr1 % 2); ++i)
			 {
				 cout << 1 << " ";
			 }
		}
		cout << "\n";
	}
}
