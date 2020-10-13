//https://atcoder.jp/contests/arc104/tasks/arc104_b
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
	int n, ans = 0;
	string s;
	cin >> n >> s;
	for (int i = 0; i < n; ++i)
	{
		int c1 = 0, c2 = 0;
		for (int j = i; j < n; ++j)
		{
			if (s[j] == 'A') c1++;
			else if (s[j] == 'T') c1--;
			else if (s[j] == 'C') c2++;
			else c2--;
			if (c1 == 0 && c2 == 0) ans++;
		}
	}
	cout << ans;
}
