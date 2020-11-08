//https://codeforces.com/group/Rv2Qzg0DgK/contest/270965/problem/D
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
	int a[n];
	for (auto& elem : a) cin >> elem;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i != j && abs (a[j] - a[i]) <= k) ans++;
		}
	}
	cout << ans;
}
