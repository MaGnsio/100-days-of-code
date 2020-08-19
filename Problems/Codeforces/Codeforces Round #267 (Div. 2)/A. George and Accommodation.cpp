//https://codeforces.com/problemset/problem/467/A
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
	int n, count = 0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int p, q;
		cin >> p >> q;
		if (q - p > 1)
		{
			count++;
		}
	}
	cout << count;
}
