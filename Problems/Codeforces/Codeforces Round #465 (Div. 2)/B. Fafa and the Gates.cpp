//https://codeforces.com/problemset/problem/935/B
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
	string s;
	cin >> n >> s;
	pair<int, int> pos (0, 0);
	int p = 0, c = 0, pre = 0;
	for (int i = 0; i < n; ++i)
	{
		if (s[i] == 'R') pos.F++;
		if (s[i] == 'U') pos.S++;
		if (pos.F > pos.S) p = 1;
		if (pos.S > pos.F) p = 2;
		if (pre && pre != p) c++;
		pre = p;
	}
	cout << c;
}
