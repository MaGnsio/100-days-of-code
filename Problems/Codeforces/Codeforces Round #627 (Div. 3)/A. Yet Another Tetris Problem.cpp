//https://codeforces.com/problemset/problem/1324/A
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

void solve ()
{
	int n;
	cin >> n;
	int arr[n];
	for (auto& elem : arr)
	{
		cin >> elem;
	}
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (abs(arr[i] - arr[j]) % 2)
			{
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "YES\n";
	return;
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int t;
	cin >> t;
	while (t--)
	{
		solve ();
	}
}
