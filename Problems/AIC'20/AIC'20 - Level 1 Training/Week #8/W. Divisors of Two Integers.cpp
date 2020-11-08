//https://codeforces.com/group/Rv2Qzg0DgK/contest/286457/problem/W
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
	int n, x, y;
	cin >> n;
	multiset<int> a;
	for (int i = 0; i < n; ++i)
	{
		int z;
		cin >> z;
		a.insert (z);
	}
	x = *prev (a.end ());
	for (int i = 1; i <= x; ++i)
	{
		if (x % i == 0) a.erase (a.find (i));
	}
	y = *prev (a.end ());
	cout << x << " " << y;
}
