//https://codeforces.com/problemset/problem/546/A
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
	int k, n, w, tot = 0;
	cin >> k >> n >> w;
	for (int i = 1; i <= w; ++i)
	{
		tot += (i * k);
	}
	if (tot - n > 0)
	{
		cout << tot - n;
	}
	else
	{
		cout << 0;
	}
}