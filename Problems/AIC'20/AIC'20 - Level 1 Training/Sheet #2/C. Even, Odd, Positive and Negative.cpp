//https://codeforces.com/group/Rv2Qzg0DgK/contest/271445/problem/C
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
	int k, e = 0, o = 0, p = 0, n = 0;
	cin >> k;
	for (int i = 0; i < k; ++i)
	{
		int x;
		cin >> x;
		if (!(x % 2)) e++;
		if (x % 2) o++;
		if (x > 0) p++;
		if (x < 0) n++;
	}
	cout << "Even: " << e << "\nOdd: " << o << "\nPositive: " << p << "\nNegative: " << n;
}
