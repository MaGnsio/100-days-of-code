//https://codeforces.com/problemset/problem/1132/B
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
	ll n, m, sum = 0;
	cin >> n;
	ll a[n];
	for (auto& elem : a)
	{
		cin >> elem;
		sum += elem;
	}
	cin >> m;
	ll b[m];
	for (auto& elem : b) cin >> elem;
	sort (a, a + n, greater<int> ());
	for (ll i = 0; i < m; ++i)
	{
		cout << sum - a[b[i] - 1] << "\n";
	}
}
