//https://codeforces.com/problemset/problem/1187/A
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
		ll n, s, t;
		cin >> n >> s >> t;
		cout << max (n - min (t, s), n - max (t, s)) + 1 << "\n";
	}
}
