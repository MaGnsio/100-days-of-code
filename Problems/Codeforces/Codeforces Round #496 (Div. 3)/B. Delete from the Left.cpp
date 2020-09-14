//https://codeforces.com/problemset/problem/1005/B
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
	string t, s;
	cin >> t >> s;
	int ans = max (t.size (), s.size ()) - min (t.size (), s.size ());
	if (t.size () > s.size ()) t.erase (0, ans);
	else if (s.size () > t.size ()) s.erase (0, ans);
	for (int i = t.size () - 1; i >= 0; --i)
	{
		if (t[i] != s[i])
		{
			ans += (2 * (i + 1));
			break;
		}
	}
	cout << ans;
}
