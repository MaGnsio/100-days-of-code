//https://codeforces.com/contest/1401/problem/A
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

void solve ()
{
	ll n, k;
	cin >> n >> k;
	if (n >= k)
	{
		if ((n - k) % 2 == 0)
		{
			cout << 0 << "\n";
		}
		else
		{
			cout << 1 << "\n";
		}
	}
	else
	{
		cout << k - n << "\n";
	}
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int t;
	cin >> t;
	while (t--)
	{
		solve ();
	}
}
