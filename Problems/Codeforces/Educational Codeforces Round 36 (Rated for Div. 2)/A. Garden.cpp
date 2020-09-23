//https://codeforces.com/problemset/problem/915/A
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
	int n, l, ans = 0;
	cin >> n >> l;
	int arr[n];
	for (auto& elem : arr) cin >> elem;
	sort (arr, arr + n, greater<int> ());
	for (int i = 0; i < n; ++i)
	{
		if (!(l % arr[i]))
		{
			ans = arr[i];
			break;
		}
	}
	cout << (l / ans);
}
