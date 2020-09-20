//https://codeforces.com/problemset/problem/706/A
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
	int x, y, n;
	ld mt = 1e9;
	cin >> x >> y >> n;
	for (int i = 0; i < n; ++i)
	{
		int tx, ty, v;
		cin >> tx >> ty >> v;
		mt = min (mt, ld (sqrt (((x - tx) * (x - tx)) + ((y - ty) * (y - ty))) / v));
	}
	cout << setprecision (20) << mt;
}
