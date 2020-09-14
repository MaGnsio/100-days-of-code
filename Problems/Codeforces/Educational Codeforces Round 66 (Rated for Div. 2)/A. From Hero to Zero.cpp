//https://codeforces.com/problemset/problem/1175/A
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
		ll n, k, ans = 0;
		cin >> n >> k;
		while (n > 0)
		{
			if (n % k == 0)
			{
				n /= k;
				ans++;
			}
			else
			{
				ans += (n % k);
				n -= (n % k);
			}
		}
		cout << ans << "\n";
	}
}
