//https://codeforces.com/problemset/problem/460/A
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
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		if (i % m == 0)
		{
			n++;
		}
	}
	cout << n;
}
