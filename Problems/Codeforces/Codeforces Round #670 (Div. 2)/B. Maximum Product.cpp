//https://codeforces.com/contest/1406/problem/B
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
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, ma = LLONG_MIN;
		cin >> n;
		ll arr[n];
		for (auto& elem : arr)
		{
			cin >> elem;
			ma = max (ma, elem);
		}
		sort (arr, arr + n, [](ll a, ll b){return abs(a) > abs(b);});
		if (ma < 0)
		{
			cout << arr[n - 1] * arr[n - 2] * arr[n - 3] * arr[n - 4] * arr[n - 5] << "\n";
		}
		else
		{
			ll ans = arr[0] * arr[1] * arr[2] * arr[3] * arr[4];
			for (int i = 5; i < n; ++i)
			{
				for (int j = 0; j < 5; ++j)
				{
					ll tmp = arr[i];
					//its guaranteed that the max product contains at least 4 of the first 5 elements
					for (int k = 0; k < 5; ++k)
					{
						if (k != j) tmp *= arr[k];
					}
					ans = max(ans, tmp);
				}
			}
			cout << ans << "\n";
		}
	}

}
