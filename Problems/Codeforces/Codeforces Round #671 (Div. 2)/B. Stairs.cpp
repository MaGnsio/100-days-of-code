//https://codeforces.com/contest/1419/problem/B
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

//**squares made of cells
ll gets (ll x)
{
	return x * (x + 1) / 2;
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int t;
	cin >> t;
	while (t--)
	{
		ll x, sum = 1;
		cin >> x;
		int ans = 1, d = 2;
		while (sum + gets ((d * 2) - 1) <= x)
		{
			d *= 2;
			sum += gets (d - 1);
			ans++;
		}
		cout << ans << "\n";
	}
}
