//https://codeforces.com/problemset/problem/136/A
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
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (arr [j] == i)
			{
				cout << j + 1 << " ";
			}
		}
	}
}
