//https://codeforces.com/contest/1419/problem/D1
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
	int ans = (n - 1) / 2;
	vector<int> v (n), v1 (n / 2), v2 (n - (n / 2));
	for (auto& elem : v) cin >> elem;
	sort (v.begin (), v.end ());
	for (int i = 0; i < n / 2; ++i) v1[i] = v[i];
	for (int i = 0; i < n - (n / 2); ++i) v2[i] = v[(n / 2) + i];
	cout << ans << "\n";
	for (int i = 0; i < n - (n / 2); ++i)
	{
		cout << v2[i] << " ";
		if (i < n / 2) cout << v1[i] << " ";
	}
}
