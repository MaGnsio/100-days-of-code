//https://codeforces.com/problemset/problem/1141/B
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
	ll n;
	cin >> n;
	ll arr[2 * n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		arr[i + n] = arr[i];
	}
	ll ctr = 0, max = 0;
	for (int i = 0; i < 2 * n; ++i)
	{
		if (arr[i]) ctr++;
		else
		{
			if (ctr > max) max = ctr;
			ctr = 0;
		}
	}
	cout << max;
}
