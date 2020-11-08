//https://codeforces.com/group/Rv2Qzg0DgK/contest/273784/problem/Q
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
	vector<string> v;
	string s;
	while (cin >> s) v.push_back (s);
	for (int i = 0; i < v.size (); ++i)
	{
		reverse (v[i].begin (), v[i]. end ());
		cout << v[i];
		if (i < v.size () - 1) cout << " ";
	}
}
