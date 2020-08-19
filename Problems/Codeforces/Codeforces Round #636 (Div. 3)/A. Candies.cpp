//https://codeforces.com/problemset/problem/1343/A
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

void solve ()
{
	int n;
	cin >> n;
	ll d = 0;
	ll k = 1; 		//k > 1 --> starts from 2 days
	ll p = 2;
	while (d == 0)
	{
		k += p;		// 3 <= n <= 10^9 --> k starts from 3 [if 2 days x = (1 + 2) / n ...]
		p *= 2;
		if (n % k == 0)
		{
			cout << n / k << "\n";
			d = 4;
		}
	}
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	ll t;
	cin >> t;
	while (t--)
	{
		solve ();
	}
}
