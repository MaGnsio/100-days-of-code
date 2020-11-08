//https://codeforces.com/group/Rv2Qzg0DgK/contest/271445/problem/X
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
		ll n, ans = 0;
		cin >> n;
		bitset<32> b(n);
		for (int i = 0; i < b.count(); ++i) ans += (1 << i);
		cout << ans << "\n";
	}
}
