//https://codeforces.com/problemset/problem/991/B
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
	int n, sum = 0;
	cin >> n;
	int arr[n];
	for (auto& elem : arr)
	{
		cin >> elem;
		sum += elem;
	}
	sort (arr, arr + n);
	int ans = 0;
	while (sum * 10 < n * 45)
	{
		sum += 5 - arr[ans];
		ans++;
	}
	cout << ans;
}
