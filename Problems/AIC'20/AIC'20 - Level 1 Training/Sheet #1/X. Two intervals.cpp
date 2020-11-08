//https://codeforces.com/group/Rv2Qzg0DgK/contest/270964/problem/X
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
	ll a[4];
	for (auto& elem: a) cin >> elem;
	if (a[1] < a[2] || a[3] < a[0]) cout << -1;
	else
	{
		sort (a, a + 4);
		cout << a[1] << " " << a[2];
	}
}
