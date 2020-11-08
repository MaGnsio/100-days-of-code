//https://codeforces.com/group/Rv2Qzg0DgK/contest/276233/problem/I
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

void matrix_swap (int n, int a[][500], int x, int y)
{
	for (int i = 0; i < n; ++i) swap (a[x - 1][i], a[y - 1][i]);
	for (int i = 0; i < n; ++i) swap (a[i][x - 1], a[i][y - 1]);
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int n, x, y;
	cin >> n >> x >> y;
	int a[n][500];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j) cin >> a[i][j];
	}
	matrix_swap (n, a, x, y);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j) cout << a[i][j] << " ";
		cout << "\n";
	}

}
