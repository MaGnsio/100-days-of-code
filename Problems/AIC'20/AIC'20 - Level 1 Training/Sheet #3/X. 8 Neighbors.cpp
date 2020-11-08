//https://codeforces.com/group/Rv2Qzg0DgK/contest/272491/problem/X
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
	int n, m, x , y;
	cin >> n >> m;
	char a[n][m];
	for (auto& rows : a)
	{
		for (auto& elem : rows) cin >> elem;
	}
	cin >> x >> y;
	if ((a[x - 2][y - 2] == 'x' || x - 2 < 0 || x - 2 > n - 1 || y - 2 < 0 || y - 2 > m - 1)
	&& (a[x - 2][y - 1] == 'x' || x - 2 < 0 || x - 2 > n - 1|| y - 1 < 0 || y - 1 > m - 1)
	&& (a[x - 2][y] == 'x' || x - 2 < 0 || x - 2 > n - 1|| y < 0 || y > m - 1)
	&& (a[x - 1][y - 2] == 'x' || x - 1 < 0 || x - 1 > n - 1|| y - 2 < 0 || y - 2 > m - 1)
	&& (a[x - 1][y] == 'x' || x - 1 < 0 || x - 1 > n - 1|| y < 0 || y > m - 1)
	&& (a[x][y - 2] == 'x' || x < 0 || x > n - 1|| y - 2 < 0 || y - 2 > m - 1)
	&& (a[x][y - 1] == 'x' || x < 0 || x - 1 > n || y - 1 < 0 || y - 1 > m)
	&& (a[x][y] == 'x' || x < 0 || x > n || y < 0 || y > m))
	{
		cout << "yes";
	}
	else cout << "no";
}
