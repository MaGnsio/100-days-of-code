//https://codeforces.com/problemset/problem/1248/B
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
	ll n, x = 0, y = 0;
	cin >> n;
	ll arr[n];
	for (auto& elem : arr) cin >> elem;
	sort (arr, arr + n);
	for (int i = 0; i < n / 2; ++i) x += arr[i];
	for (int i = n / 2; i < n; ++i) y += arr[i];
	cout << (x * x) + (y * y);
}
