//https://codeforces.com/problemset/problem/870/A
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
	int n, m, aeb = INT_MAX;
	cin >> n >> m;
	int a[n], b[m];
	for (auto& elem : a) cin >> elem;
	sort (a, a + n);
	for (auto& elem : b) cin >> elem;
	sort (b, b + m);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (a[i] == b[j]) aeb = min (aeb, a[i]);
		}
	}
	cout << min (aeb, max (a[0], b[0]) + (min (a[0], b[0]) * 10));
}
