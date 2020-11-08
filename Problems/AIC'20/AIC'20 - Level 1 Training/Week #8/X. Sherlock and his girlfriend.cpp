//https://codeforces.com/group/Rv2Qzg0DgK/contest/286457/problem/X
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
	int sieve[100005] = {};
	cin >> n;
	for (int i = 2; i <= n + 1; ++i)
	{
		if (!sieve[i])
		{
			for (int j = 2 * i; j <= n + 1; j += i) sieve[j] = 1;
		}
	}
	if (n > 2) cout << "2\n";
	else cout << "1\n";
	for (int i = 2; i <= n+1; ++i)
	{
		if(!sieve[i]) cout << "1 ";
		else cout << "2 ";
	}

}
