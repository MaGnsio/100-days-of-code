//https://codeforces.com/contest/1392/problem/A
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
		if (arr[i] != arr[i + 1])
		{
			cout << 1 << "\n";
			return;
		}
	}
	cout << n << "\n";
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int t;
	cin >> t;
	while (t)
	{
		solve ();
		t--;
	}
}