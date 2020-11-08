//https://codeforces.com/group/Rv2Qzg0DgK/contest/273155/problem/C
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
	int n, m, ctr1 = 0, ctr2 = 0;
	cin >> n >> m;
	vector <pair<int, int>> v;
	for (int i = 0; i < n; ++i)
	{
		int a, b;
		cin >> a >> b;
		if (a != b)
		{
			int j = 0;
			while (a + j < b)
			{
				v.push_back (make_pair (a + j, a + j + 1));
				j++;
			}
		}
	}
	sort (v.begin (), v.end ());
	for (int i = 0; i < v.size (); ++i)
	{
		if (v[i].F == ctr1) ctr1++;
		if (v[i].S == ctr2 + 1) ctr2++;
	}
	cout << (ctr1 >= m - 1 && ctr2 >= m ? "YES" : "NO");
}
