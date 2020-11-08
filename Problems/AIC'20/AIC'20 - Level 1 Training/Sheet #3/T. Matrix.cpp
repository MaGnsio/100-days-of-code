//https://codeforces.com/group/Rv2Qzg0DgK/contest/272491/problem/T
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
	int n, m = 0, s = 0;
	cin >> n;
	int a[n][n];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> a[i][j];
			if (i == j) m += a[i][j];
			if (i + j == n - 1) s += a[i][j];
		}
	}
	cout << abs (m - s);
}
