//https://codeforces.com/problemset/problem/467/B
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
	int n, m, k, ans = 0;
	cin >> n >> m >> k;
	int a[m + 1];
	for (auto& elem : a) cin >> elem;
	for (int i = 0; i < m; ++i)
	{
		bitset<32> x (a[i] ^ a[m]);
		if (x.count () <= k) ans++;

	}
	cout << ans;
}
