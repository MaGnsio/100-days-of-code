//https://codeforces.com/problemset/problem/155/A
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
	int n;
	cin >> n;
	int a[n];
	bool str = false;
	for (auto& elem : a) cin >> elem;
	int mi = a[0], ma = a[0], ans = 0;
	for (int i = 1; i < n; ++i)
	{
		if (a[i] < mi || a[i] > ma)
		{
			mi = min (mi, a[i]);
			ma = max (ma, a[i]);
			ans++;
		}
	}
	cout << ans;
}
