//https://codeforces.com/problemset/problem/266/A
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0);
	int n, c = 0;
	cin >> n;
	char r[n];
	cin >> r;
	for (int i = 0; i < n; ++i)
	{
		if (r[i] == r[i + 1])
		{
			c++;
		}
	}
	cout << c;
}