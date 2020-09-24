//https://codeforces.com/problemset/problem/697/A
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
	ll t, s, x;
	cin >> t >> s >> x;
	ll c = x - t;
	cout << (((c % s == 0 || c % s == 1) && c >= 0 && c != 1) ? "YES" : "NO");
}
