//https://codeforces.com/contest/1405/problem/B
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
		ll n;
		cin >> n;
		ll arr[n];
		for (auto& elem : arr)
		{
			cin >> elem;
		}
		for (int i = 1; i < n; ++i)
		{
			if (arr[i] > 0)
			{
				arr[i + 1] += arr[i];
				arr[i] = 0;
			}
			else if (arr[i] < 0)
			{
				arr[0] += arr[i];
				arr[i] = 0;
			}
		}
		cout << abs (arr[0]) << "\n";
	}
}
