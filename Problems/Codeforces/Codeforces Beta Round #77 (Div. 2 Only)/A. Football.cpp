//https://codeforces.com/problemset/problem/96/A
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
	int ctr = 1;
	string s;
	cin >> s;
	for (int i = 1; i < s.length (); i++)
	{
		if (s[i] == s[i - 1])
		{
			ctr++;
			if (ctr == 7)
			{
				break;
			}
		}
		else
		{
			ctr = 1;
		}
	}
	if (ctr == 7)
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}
}
