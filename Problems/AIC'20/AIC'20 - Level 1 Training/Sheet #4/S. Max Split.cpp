//https://codeforces.com/group/Rv2Qzg0DgK/contest/273784/problem/S
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
	string s;
	cin >> s;
	vector<string> v;
	int l = 0, r = 0, str = 0;
	for (int i = 0; i < s.size (); ++i)
	{
		s[i] == 'L' ? l++ : r++;
		if (l == r)
		{
			v.push_back (s.substr (str, i - str + 1));
			l = 0, r = 0, str = i + 1;
		}
	}
	cout << v.size () << "\n";
	for (int i = 0; i < v.size (); ++i) cout << v[i] << "\n";
}
