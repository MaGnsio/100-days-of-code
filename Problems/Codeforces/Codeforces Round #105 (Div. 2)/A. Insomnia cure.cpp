//https://codeforces.com/problemset/problem/148/A
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
	int k, l, m, n, d, ctr = 0;
	cin >> k >> l >> m >> n >> d;
	for (int i = 1; i <= d; ++i)
	{
		if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
		{
			ctr++;
		}
	}
	cout << ctr;
}
