//https://codeforces.com/problemset/problem/1201/A
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
	int n, m, ms = 0;
	cin >> n >> m;
	int ans[m][5] {}, s[m], ma[m] {};
	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;
		for (int j = 0; j < m; ++j)
		{
			if (s[j] == 'A') ans[j][0]++;
			if (s[j] == 'B') ans[j][1]++;
			if (s[j] == 'C') ans[j][2]++;
			if (s[j] == 'D') ans[j][3]++;
			if (s[j] == 'E') ans[j][4]++;
		}
	}
	for (int i = 0; i < m; ++i) cin >> s[i];
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			ma[i] = max (ma[i], ans[i][j]);
		}
	}
	for (int i = 0; i < m; ++i) ms += (s[i] * ma[i]);
	cout << ms;
}
