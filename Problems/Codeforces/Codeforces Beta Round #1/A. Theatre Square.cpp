//https://codeforces.com/problemset/problem/1/A
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
	ll m, n, a;
	cin >> m >> n >> a;
	ll ans = ((m + a - 1) / a) * ((n + a - 1) / a);
	cout << ans;
}
