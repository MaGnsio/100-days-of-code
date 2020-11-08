//https://codeforces.com/group/Rv2Qzg0DgK/contest/286457/problem/O
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
	ll n, m, ans = 1;
	cin >> n >> m;
	while (n--)
	{
		ans *= 2;
		if (ans < 0 || ans > m)
		{
			cout << m;
			return 0;
		}
	}
	cout << m % ans;
}
