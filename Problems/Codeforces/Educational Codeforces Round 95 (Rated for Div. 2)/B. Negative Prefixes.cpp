//https://codeforces.com/contest/1418/problem/B
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
		vector<int> a(n), b(n), c;
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		for (int i = 0; i < n; ++i)
		{
			cin >> b[i];
			if(!b[i])
				c.push_back (a[i]);
		}
		sort (c.rbegin (), c.rend());
		for (int i = 0, j = 0; i < n; ++i)
		{
			if (b[i])
				cout << a[i] << " ";
			else
				cout << c[j++] << " ";
		}
		cout << "\n";
	}
}
