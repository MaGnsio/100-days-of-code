//https://codeforces.com/group/Rv2Qzg0DgK/contest/285699/problem/H
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
	int n, k;
	ld ans = 0;
	cin >> n >> k;
	vector<int> v(n + 1);
	for (int i = 1; i <= n; ++i) cin >> v[i];
	while (k <= n)
	{
		ld su = 0;
		for (int i = 1; i <= k; ++i) su += v[i];
		ans = max (ans, su / k);
		for (int i = k + 1; i <= n; ++i)
		{
			su -= v[i - k];
			su += v[i];
			ans = max (ans, su / k);
		}
		k++;
	}
	cout << fixed << setprecision (15) << ans;
}
