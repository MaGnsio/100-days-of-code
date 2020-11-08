//https://codeforces.com/problemset/problem/835/C
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
	int n, q, c;
	int cnt[11][101][101] = {};
	cin >> n >> q >> c;
	for (int i = 0; i < n; ++i)
	{
			int x, y, s;
			cin >> x >> y >> s;
			cnt[s][x][y]++;
	}
	for (int p = 0; p <= c; ++p)
	{
		for (int i = 1; i < 101; ++i)
		{
			for (int j = 1; j < 101; ++j)
			{
				cnt[p][i][j] += cnt[p][i - 1][j] + cnt[p][i][j - 1] - cnt[p][i - 1][j - 1];
			}
		}
	}
	for (int i = 0; i < q; ++i)
	{
		int t, x1, y1, x2, y2;
		cin >> t >> x1 >> y1 >> x2 >> y2;
		int ans = 0;
		for (int p = 0; p <= c; ++p)
		{
			int brightness = (p + t) % (c + 1);
			int amount = cnt[p][x2][y2] - cnt[p][x1 - 1][y2] - cnt[p][x2][y1 - 1] + cnt[p][x1 - 1][y1 - 1];
			ans += brightness * amount;
		}
		cout << ans << "\n";
	}
}
