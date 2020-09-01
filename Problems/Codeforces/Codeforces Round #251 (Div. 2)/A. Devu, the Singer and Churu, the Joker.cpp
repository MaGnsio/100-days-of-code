//https://codeforces.com/problemset/problem/439/A
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
	int n, d;
	cin >> n >> d;
	int t = (n - 1) * 10, j = (n - 1) * 2;
	int arr[n];
	for (auto& elem : arr)
	{
		cin >> elem;
		t += elem;
	}
	if (t > d)
	{
		cout << -1;
		return 0;
	}
	else
	{
		while (d - t >= 5)
		{
			j++;
			t += 5;
		}
		cout << j;
		return 0;
	}
}
