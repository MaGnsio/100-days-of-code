//https://codeforces.com/problemset/problem/1106/C
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
	ll n, sum = 0;
	cin >> n;
	ll arr[n];
	for (auto& elem : arr) cin >> elem;
	sort (arr, arr + n);
	for (int i = 0; i < n / 2; ++i)
		sum += ((arr[i] + arr[n - i - 1]) * (arr[i] + arr[n - i - 1]));
	cout << sum << "\n";	
}
