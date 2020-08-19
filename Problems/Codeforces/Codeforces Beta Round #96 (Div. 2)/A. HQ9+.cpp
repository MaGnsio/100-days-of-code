//https://codeforces.com/problemset/problem/133/A
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
	bool c = 0;
	cin >> s;
	for (int i = 0; i < s.length (); ++i)
	{
		if (s[i] == 72 || s[i] == 81 || s[i] == 57)
		{
			c = 1;
			break;
		}
	}
	if (c == 1)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
