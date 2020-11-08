//https://codeforces.com/group/Rv2Qzg0DgK/contest/271445/problem/B
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
	cin >> n;
	if (n == 1)
	{
		cout << -1;
		return 0;
	}
	for (int i = 2; i <= n; i += 2) cout << i << "\n";
}
