//https://codeforces.com/problemset/problem/839/A
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
	int n, k, d = 0, cur = 0;
	cin >> n >> k;
	int arr[n];
	for (auto& elem : arr)
	{
		cin >> elem;
		cur += elem;
		int r = min (cur, 8);
		k -= r;
		cur -= r;
		d++;
		if (k <= 0)
			break;
	}
	if (k > 0)
		cout << -1;
	else
		cout << d;
}
