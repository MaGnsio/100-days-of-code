//https://codeforces.com/contest/1395/problem/B
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int n, m, x, y;
void solve (int i, int j)
{
	cout << (i + x - 2) % n + 1 << " " << (j + y - 2) % m + 1 << "\n";
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);	
	cin >> n >> m >> x >> y;
	for (int i = 1; i <= n; ++i)
	{
		if (i & 1)
		{
			for (int j = 1; j <= m; ++j)
			{
				solve (i, j);
			}				
		}
		else
		{
			for (int j = m; j >= 1; --j)
			{
				solve (i, j);
			}
		}
	}
}