//https://codeforces.com/problemset/problem/344/A
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
	int n;
	cin >> n;
	int arr[n];
	for (auto& elem : arr)
	{
		cin >> elem;
	}
	int ans = 1;
	for (int i = 1; i < n; ++i)
	{
		if (arr [i] != arr[i - 1])
		{
			ans++;
		}
	}
	cout << ans;
}
