//https://codeforces.com/group/Rv2Qzg0DgK/contest/271445/problem/H
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
	for (int i = 2; i < n; ++i)
	{
		if (!(n % i))
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}
