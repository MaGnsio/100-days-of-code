//https://codeforces.com/problemset/problem/1183/B
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
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int min = INT_MAX, max = 0;
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			if (x < min) min = x;
			if (x > max) max = x;
		}
		cout << (max - min <= 2 * k ? min + k : -1) << "\n";
	}
}
