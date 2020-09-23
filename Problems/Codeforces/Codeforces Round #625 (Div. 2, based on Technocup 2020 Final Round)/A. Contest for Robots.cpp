//https://codeforces.com/problemset/problem/1321/A
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
	int n, rs = 0, bs = 0, c = 0;
	cin >> n;
	int r[n], b[n];
	for (auto& elem : r)
	{
		cin >> elem;
		if (elem == 1) rs++;
	}
	for (auto& elem : b)
	{
		cin >> elem;
		if (elem == 1) bs++;
	}
	for (int i = 0; i < n; ++i)
	{
		if (r[i] == b[i] && r[i] == 1) c++;
	}
	int ans = (rs == c ? -1 : ceil ((bs - c) / (rs - c) + 1));
	if ((bs == rs && c == bs) || (rs == 0)) cout << -1;
	else if (rs > bs) cout << 1;
	else cout << ans;
}
