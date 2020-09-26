//https://codeforces.com/problemset/problem/914/A
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
	ll n, ans = 0, in = 0;
	cin >> n;
	ll arr[n];
	for (auto& elem : arr) cin >> elem;
	sort (arr, arr + n, greater<ll> ());
	for (int i = 0; i < n; ++i)
	{
		in = 0;
		for (int j = 0; j * j <= arr[i]; ++j)
		{
			if (j * j == arr[i])
			{
				in = 1;
			}
		}
		if (in == 0)
		{
			ans = arr[i];
			break;
		}
	}
	cout << ans;
}
