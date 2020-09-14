//https://codeforces.com/problemset/problem/1216/B
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
	int n, ms = 0;
	cin >> n;
	pair <int, int> arr[n + 1];
	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i].F;
		arr[i].S = i;
	}
	sort (arr + 1, arr + n + 1);
	for (int i = n; i > 0; --i)
	{
		ms += ((arr[i].F * (n - i)) + 1);
	}
	cout << ms << "\n";
	for (int i = n; i > 0; --i)
	{
		cout << arr[i].S << " ";
	}
}
