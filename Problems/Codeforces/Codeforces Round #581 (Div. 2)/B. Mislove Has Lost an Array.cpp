//https://codeforces.com/problemset/problem/1204/B
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
	ll n, l, r;
	cin >> n >> l >> r;
	ll min = pow (2, l) - 1 + n - l;
	ll max = pow (2, r) - 1 + ((n - r) * pow (2, r - 1));
	cout << min << " " << max;
}
