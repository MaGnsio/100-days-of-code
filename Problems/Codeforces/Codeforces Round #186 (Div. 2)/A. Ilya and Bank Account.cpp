//https://codeforces.com/problemset/problem/313/A
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
	ll b;
	cin >> b;
	if (b >= 0)
	{
		cout << b;
	}
	else
	{
		cout << max (b / 10, (b - (b % 100) + (b % 10 * 10)) / 10);
	}
}
