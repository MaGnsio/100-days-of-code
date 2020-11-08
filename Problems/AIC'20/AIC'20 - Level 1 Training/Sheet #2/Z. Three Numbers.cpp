//https://codeforces.com/group/Rv2Qzg0DgK/contest/271445/problem/Z
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
	int k, s, ans = 0;
	cin >> k >> s;
	for (int i = 0; i <= k; ++i)
	{
		for (int j = 0; j <= k; ++j)
		{
			if (s - i - j <= k && s - i - j >= 0) ans++;
		}
	}
	cout << ans;
}
