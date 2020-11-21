//https://codeforces.com/group/aDFQm4ed6d/contest/273592/problem/C
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
	ll m, n, sum1 = 0, sum2 = 0, x;
	cin >> m >> n;
	for (ll i = 0; i < m; ++i)
	{
		cin >> x;
		sum1 += x;
	}
	for (ll i = 0; i < n; ++i)
	{
		cin >> x;
		sum2 += x;
	}
	if (sum1 > sum2) cout << 0;
	else cout << sum2 - sum1 + 1;
}

