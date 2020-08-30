//https://codeforces.com/problemset/problem/34/B
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
	int n, m, ans = 0;
	cin >> n >> m;
	int arr[n];
	for (auto& elem : arr)
	{
		cin >> elem;
	}
	sort (arr, arr + n);
	for (int i = 0; i < m && arr[i] < 1; ++i)
	{
		ans -= arr[i];
	}
	cout << ans;
}
