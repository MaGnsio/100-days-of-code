//https://codeforces.com/problemset/problem/1335/A
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
		ll c;
		cin >> c;
		if (c % 2 == 0)
		{
			cout << (c / 2) - 1 << "\n";
		}
		else
		{
			cout << c / 2 << "\n";
		}
	}
}
