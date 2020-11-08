//https://codeforces.com/group/Rv2Qzg0DgK/contest/273784/problem/M
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
	string s, t = "hello";
	cin >> s;
	size_t f = -1;
	for (int i = 0; i < t.size (); ++i)
	{
		f = s.find (t[i], f + 1);
		if (f == string::npos)
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}
