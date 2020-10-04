//https://codeforces.com/problemset/problem/1169/A
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
	int n, a, x, b, y;
	cin >> n >> a >> x >> b >> y;
	while (1)
	{
		if (a == b)
		{
			cout << "YES";
			return 0;
		}
		if (a == x || b == y)
		{
			cout << "NO";
			return 0;
		}
		a = (a + 1 <= n ? ++a : 1);
		b = (b - 1 >= 1 ? --b : n);
	}
}
