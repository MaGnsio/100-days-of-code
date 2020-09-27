//https://codeforces.com/problemset/problem/152/A
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
	int n, m, ans = 0;
	cin >> n >> m;
	vector<string> v(n);
	for (auto& elem : v) cin >> elem;
	int arr[n] = {};
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			bool chk = true;
			for (int k = 0; k < n; ++k)
			{
				if (v[i][j] < v[k][j]) chk = false;
			}
			if (chk) arr[i]++;
		}
	}
	for (int i = 0; i < n; ++i)
		if (arr[i]) ans++;
	cout << ans;
}
