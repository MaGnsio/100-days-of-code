//https://codeforces.com/problemset/problem/337/A
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
	ll n, m, diff = LLONG_MAX;
	cin >> n >> m;
	int p[m];
	for (auto& elem : p)
	{
		cin >> elem;
	}
	sort (p, p + m);
	for (int i = n - 1; i < m; ++i)
	{
		if (p[i] - p[i - n + 1] < diff)
		{
			diff = p[i] - p[i - n + 1];
		}
	}
	cout << diff;
}
