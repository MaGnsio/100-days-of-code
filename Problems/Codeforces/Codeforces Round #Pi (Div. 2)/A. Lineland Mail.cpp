//https://codeforces.com/problemset/problem/567/A
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
	sort (arr, arr + n);
	int min = arr[0];
	for (auto& elem : arr)
	{
		elem += min;
	}
	for (int i = 0; i < n; ++i)
	{
		if ((arr[i + 1] - arr[i] > arr[i] - arr[i - 1] && i) || (i == n - 1))
		{
			cout << arr[i] - arr[i - 1] << " ";
		}
		else
		{
			cout << arr[i + 1] - arr[i] << " ";
		}
		if (arr[i] - arr[0] > arr[n - 1] - arr [i])
		{
			cout << arr[i] - arr[0] << "\n";
		}
		else
		{
			cout << arr[n - 1] - arr [i] << "\n";
		}
	}
}
