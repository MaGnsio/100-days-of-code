//https://codeforces.com/group/Rv2Qzg0DgK/contest/273784/problem/K
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
	int t;
	cin >> t;
	while (t--)
	{
		string s, t;
		cin >> s >> t;
		for (int i = 0; i < min (s.size (), t.size ()); ++i)
		{
			cout << s[i] << t[i];
		}
		for (int i = min (s.size (), t.size ()); i < max (s.size (), t.size ()); ++i)
		{
			if (s.size () > t.size ()) cout << s[i];
			else cout << t[i];
		}
		cout << "\n";
	}
}
