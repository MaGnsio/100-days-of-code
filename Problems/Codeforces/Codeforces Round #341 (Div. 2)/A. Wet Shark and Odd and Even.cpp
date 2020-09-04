//https://codeforces.com/problemset/problem/621/A
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
	ll n, sum = 0, i = 0;
	cin >> n;
	ll arr[n];
	for (auto& elem : arr)
	{
		cin >> elem;
		sum += elem;
	}
	sort (arr , arr + n);
	while (sum % 2 && i < n)
	{
		if (arr[i] % 2)
		{
			sum -= arr[i];
		}
		++i;
	}
	if (!(sum % 2))
	{
		cout << sum;
	}
	else
	{
		cout << 0;
	}
}
