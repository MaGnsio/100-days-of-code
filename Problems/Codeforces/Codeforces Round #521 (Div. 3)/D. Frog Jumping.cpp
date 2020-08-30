//https://codeforces.com/problemset/problem/1077/A
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
	int f;
	cin >> f;
	while (f--)
	{
		ll r, l, t;
		cin >> r >> l >> t;
		cout << ((t - (t / 2)) * r) - ((t / 2) * l) << "\n";
	}
}
