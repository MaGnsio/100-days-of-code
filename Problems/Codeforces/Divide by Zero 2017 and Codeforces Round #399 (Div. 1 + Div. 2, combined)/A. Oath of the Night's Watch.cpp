//
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
	ll n, str = 0, end = 0;
	cin >> n;
	ll arr[n];
	for (auto& elem : arr)
	{
		cin >> elem;
	}
	sort (arr, arr + n);
	for (ll i = 1; i < n; ++i)
	{
		if (arr[i] > arr[0])
		{
			str = i;
			break;
		}
	}
	for (ll i = n - 2; i >= 0; --i)
	{
		if (arr[i] < arr[n - 1])
		{
			end = i;
			break;
		}
	}
	cout << (arr[0] == arr[n - 1] ? 0 : end - str + 1);
}
