//https://codeforces.com/problemset/problem/1197/A
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
	int t;
	cin >> t;
	while (t--)
	{
		ll n, ctr = -2;
		cin >> n;
		ll arr[n];
		for (auto& elem : arr)
		{
			cin >> elem;
			ctr++;
		}
		sort (arr, arr + n, greater<int> ());
		ctr = max (0ll, ctr);
		ll k = min (arr[0], arr[1]);
		ll ans = min (k - 1, ctr);
		cout << ans << "\n";
	}
}
