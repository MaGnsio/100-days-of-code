//https://codeforces.com/group/Rv2Qzg0DgK/contest/286457/problem/L
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
	int n;
	while (cin >> n && n)
	{
		int ctr = 1 + (n == 1 ? 0 : 1);
		for (int i = 2; i * i <= n; ++i)
		{
			if (n % i == 0)
			{
				if (n / i == i) ctr++;
				else ctr += 2;
			}
		}
		if (ctr & 1) cout << "YES\n";
		else cout << "NO\n";	
	}
}
