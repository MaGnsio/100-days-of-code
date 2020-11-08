//https://codeforces.com/group/Rv2Qzg0DgK/contest/273784/problem/L
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
	int n, q;
	string s;
	cin >> n >> q >> s;
	while (q--)
	{
		int f, t;
		char a;
		string opt;
		cin >> opt;
		switch (opt [2])
		{
			case 'p':	s.pop_back ();
					break;
			case 'o':	cout << s.front () << "\n";
					break;
			case 'c':	cout << s.back () << "\n";
					break;
			case 'r':	cin >> f >> t;
					if (f > 0 && f <= s.size () && t > 0 && t <= s.size ())
						sort (s.begin () + min (f, t) - 1, s.begin () + max (f, t));
					break;
			case 'v':	cin >> f >> t;
					if (f > 0 && f <= s.size () && t > 0 && t <= s.size ())
						reverse (s.begin () + min (f, t) - 1, s.begin () + max (f, t));
					break;
			case 'i':	cin >> f;
					if (f > 0 && f <= s.size ())
						cout << s[f - 1] << "\n";
					break;
			case 'b':	cin >> f >> t;
					if (f > 0 && f <= s.size () && t > 0 && t <= s.size ())
						cout << s.substr (min (f, t) - 1, max (f, t) - min (f, t) + 1) << "\n";
					break;
			case 's':	cin >> a;
					s.push_back (a);
					break;
		}
	}
}
