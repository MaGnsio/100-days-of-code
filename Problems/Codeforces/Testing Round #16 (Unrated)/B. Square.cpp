//https://codeforces.com/problemset/problem/1351/B
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
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if ((a == c && b + d == a) || (a == d && b + c == a) || (b == c && a + d == b) || (b == d && a + c == b))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
