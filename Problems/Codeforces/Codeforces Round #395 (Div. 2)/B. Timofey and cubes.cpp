//https://codeforces.com/problemset/problem/764/B
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
	int arr[n + 1];
	for (int i = 1; i <= n; ++i) cin >> arr[i];
	for (int i = 1; i <= n - i + 1; ++i)
	{
		if (i % 2)
			swap (arr[i], arr[n - i + 1]);
	}
	for (int i = 1; i <= n; ++i) cout << arr[i] << " ";
}
