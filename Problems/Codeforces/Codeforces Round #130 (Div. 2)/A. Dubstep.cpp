//https://codeforces.com/problemset/problem/208/A
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
	for (int i = 0; i < s.length (); ++i)
	{
		if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
		{
			if (i != 0)
			{
				cout << " ";
			}
			i += 2;
		}
		else
		{
			cout << s[i];
		}
	}
}
