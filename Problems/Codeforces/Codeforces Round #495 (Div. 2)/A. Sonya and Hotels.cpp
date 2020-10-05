//https://codeforces.com/problemset/problem/1004/A
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
	int n, d;
	cin >> n >> d;
	int arr[n];
	for (auto& elem : arr) cin >> elem;
	int ans = 2;
	for (int i = 0; i < n - 1; ++i)
	{
		if (arr[i + 1] - arr[i] > 2 * d) ans += 2;
		if (arr[i + 1] - arr[i] == 2 * d) ans++;
	}
	cout << ans;
}
