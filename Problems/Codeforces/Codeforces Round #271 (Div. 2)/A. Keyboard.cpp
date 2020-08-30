//https://codeforces.com/problemset/problem/474/A
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
	string o = "qwertyuiopasdfghjkl;zxcvbnm,./";
	char c;
	cin >> c;
	string s;
	cin >> s;
	if (c == 'R')
	{
		for (int i = 0; i < s.size (); ++i)
		{
			size_t found = o.find (s[i]);
			s[i] = o[found - 1];
		}
	}
	else if (c == 'L') 
	{
		for (int i = 0; i < s.size (); ++i)
		{
			size_t found = o.find (s[i]);
			s[i] = o[found + 1];
		}
	}
	cout << s;
}
