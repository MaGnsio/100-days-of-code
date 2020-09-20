//https://codeforces.com/problemset/problem/1313/A
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int big (int a, int b)
{
	return a > b;
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int t;
	cin >> t;
	while (t--)
	{
		int arr[3];
		int ans = 0;
		for (auto& elem : arr)
		{
			cin >> elem;
			if (elem)
			{
				elem--;
				ans++;
			}
		}
		sort (arr, arr + 3, big);
		if (arr[0] && arr[1])
		{
			arr[0]--;
			arr[1]--;
			ans++;
		}
		if (arr[0] && arr[2])
		{
			arr[0]--;
			arr[2]--;
			ans++;
		}
		if (arr[1] && arr[2])
		{
			arr[1]--;
			arr[2]--;
			ans++;
		}
		if (arr[0] && arr[1] && arr[2])
		{
			ans++;
		}
		cout << ans << "\n";
	}
}
