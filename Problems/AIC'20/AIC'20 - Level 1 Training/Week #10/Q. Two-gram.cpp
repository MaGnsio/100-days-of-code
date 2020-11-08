//https://codeforces.com/group/Rv2Qzg0DgK/contest/290492/problem/Q
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
	string s;
	cin >> s;
	int most = 0;
	string ans;
	for (int i = 0; i < n - 1; ++i)
	{
		int cur = 0;
		for (int j = 0; j < n - 1; ++j)
		{
			if (s[j] == s[i] && s[j + 1] == s[i + 1])
			{
				++cur;
			}
		}
		if (cur > most)
		{
			most = cur;
			ans = string (s, i, 2);
		}
	}
	cout << ans;
}
