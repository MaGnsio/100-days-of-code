//https://codeforces.com/problemset/problem/617/A
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
	int x, stp = 0;
	cin >> x;
	while (x)
	{
		if (x % 5 != 0)
		{
			x -= (x % 5);
			stp++;
		}
		else
		{
			x -= 5;
			stp++;
		}
	}
	cout << stp;
}