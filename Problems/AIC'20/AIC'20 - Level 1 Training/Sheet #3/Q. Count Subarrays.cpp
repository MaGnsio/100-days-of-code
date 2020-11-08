//https://codeforces.com/group/Rv2Qzg0DgK/contest/272491/problem/Q
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
		int n, ans = 0;
		cin >> n;
		int a[n];
		for (auto& elem : a) cin >> elem;
		for (int i = 1; i < n; ++i)
		{
			for (int j = i; j < n; ++j)
			{
				if (a[j] >= a[j - 1]) ans++;
				else break;
			}
		}
		cout << ans + n << "\n";
	}
}
