//https://codeforces.com/group/Rv2Qzg0DgK/contest/270964/problem/W
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
	int a, b, c;
	char x, e;
	cin >> a >> x >> b >> e >> c;
	if (x == '*')
	{
		if (a * b == c) cout << "Yes";
		else cout << a * b;
	}
	if (x == '-')
	{
		if (a - b == c) cout << "Yes";
		else cout << a - b;
	}
	if (x == '+')
	{
		if (a + b == c) cout << "Yes";
		else cout << a + b;
	}
}
