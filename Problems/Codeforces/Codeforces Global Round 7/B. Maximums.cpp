//https://codeforces.com/problemset/problem/1326/B
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
	int n, x = 0;
	cin >> n;
	int b[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> b[i];
		b[i] += x;		//a[i]
		x = max (x, b[i]);
		cout << b[i] << " ";
	}
}
