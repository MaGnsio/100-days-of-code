//https://codeforces.com/problemset/problem/677/A
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
	int n, h;
	cin >> n >> h;
	int ans = n;
	int arr [n];
	for (auto& elem : arr)
	{
		cin >> elem;
		if (elem > h)
		{
			ans++;
		}
	}
	cout << ans;
}
