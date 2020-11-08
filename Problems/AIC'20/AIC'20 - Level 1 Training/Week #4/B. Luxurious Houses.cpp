//https://codeforces.com/group/Rv2Qzg0DgK/contest/273155/problem/B
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
	ll n, ma = 0;
	cin >> n;
	ll a[n], b[n] = {};
	for (auto& elem : a) cin >> elem;
	for (int i = n - 1; i >= 0; --i)
	{
		if (a[i] > ma)
		{
			b[i] = 0;
			ma = a[i];
		}
		else if (a[i] == ma) b[i] = 1;
		else b[i] = ma - a[i] + 1;
	}
	for (auto& elem : b) cout << elem << " ";
}
