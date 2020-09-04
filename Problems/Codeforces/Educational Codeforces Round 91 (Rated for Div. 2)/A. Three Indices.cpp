//https://codeforces.com/problemset/problem/1380/A
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
	for (int i = 1; i < n - 1; ++i)
	{
		if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i])
		{
			cout << "YES\n" << i << " " << i + 1 << " " << i + 2 << "\n";
			return;
		}
	}
	cout << "NO\n";
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
