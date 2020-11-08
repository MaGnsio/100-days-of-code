//https://codeforces.com/group/Rv2Qzg0DgK/contest/286457/problem/I
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
	int n, k, ans = 0;
	cin >> n >> k;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		if (k % x == 0) ans = max (ans, x);
	}
	cout << k / ans;
}
