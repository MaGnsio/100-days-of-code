//https://codeforces.com/group/Rv2Qzg0DgK/contest/273784/problem/T
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
	for (int i = 0; i < s.size (); ++i)
	{
		if (s[i - 1] == '?' || s[i - 1] == '&')
		{
			while (s[i] != '&' && i < s.size ())
			{
				if (s[i] == '=') cout << ": ";
				else cout << s[i];
				i++;
			}
			cout << "\n";
		}
	}
}
