//https://codeforces.com/problemset/problem/1011/A
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
	int n, m, ctr = 1;
	string s;
	cin >> n >> m >> s;
	sort (s.begin (), s.end ());
	int w = s[0] - 'a' + 1;
	char cp = s[0];
	for (int i = 1; i < n; ++i)
	{
		if (ctr == m) break;
		if (s[i] - cp > 1)
		{
			w += s[i] - 'a' + 1;
			cp = s[i];
			ctr++;
		}
	}
	if (ctr == m) cout << w;
	else cout << -1;

}
