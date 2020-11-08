//https://codeforces.com/group/Rv2Qzg0DgK/contest/270965/problem/F
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
	int n, ma = 0, mi = INT_MAX, ans = 0;
	cin >> n;
	set<int> s;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		s.insert (x);
		ma = max (ma, x);
		mi = min (mi, x);
	}
	int b = ma + mi;
	set<int>::iterator itr;
	for (itr = s.begin (); itr != s.end (); ++itr)
	{
		set<int>::iterator temp = s.find (b - *itr);
		if (*temp != n && *temp < *itr) ans++;
	}
	cout << ans;
}
