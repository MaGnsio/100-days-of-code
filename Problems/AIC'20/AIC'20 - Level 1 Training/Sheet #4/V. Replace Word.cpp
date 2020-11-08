//https://codeforces.com/group/Rv2Qzg0DgK/contest/273784/problem/V
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
	string s, e = "EGYPT";
	cin >> s;
	for (int i = 0; i < s.size (); ++i)
	{
		if (s.substr (i, 5) == e)
		{
			s.insert (i, " ");
			s.erase (i + 1, 5);
		}
	}
	cout << s;
}
