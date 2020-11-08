//https://codeforces.com/group/Rv2Qzg0DgK/contest/271445/problem/M
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

bool islucky (int x)
{
	while (x)
	{
		if (x % 10 != 4 && x % 10 != 7) return false;
		x /= 10;
	}
	return true;
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int a, b, l = 0;
	cin >> a >> b;
	for (int i = a; i <= b; ++i)
	{
		if (islucky (i))
		{
			cout << i << " ";
			l++;
		}
	}
	if (!l) cout << -1;
}
