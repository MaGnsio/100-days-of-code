//https://codeforces.com/contest/1409/problem/A
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
		ll a, b;
		cin >> a >> b;
		cout << (abs (a - b) / 10) + (abs (a -b) % 10 ? 1 : 0) << "\n";
	}
}
