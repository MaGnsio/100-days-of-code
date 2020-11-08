//https://codeforces.com/group/Rv2Qzg0DgK/contest/271445/problem/W
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
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n + i - 1; ++j)
		{
			if (j >= n - i + 1) cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}
	for (int i = n; i > 0; --i)
	{
		for (int j = 1; j <= n + i - 1; ++j)
		{
			if (j >= n - i + 1) cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}
}
