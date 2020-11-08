//https://codeforces.com/group/Rv2Qzg0DgK/contest/285699/problem/B
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
	cin >> n;
	vector<int> v(2 * n), tab;
	for (auto& elem : v) cin >> elem;
	for (int i = 0; i < 2 * n; ++i)
	{
		if (find (tab.begin (), tab.end (), v[i]) == tab.end ())
		{
			tab.push_back (v[i]);
		}
		else
		{
			int ind = distance (tab.begin (), find (tab.begin (), tab.end (), v[i]));
			tab.erase (tab.begin () + ind);
		}
		int sz = tab.size ();
		ans = max (ans, sz);
	}
	cout << ans;
}
