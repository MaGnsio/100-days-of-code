//https://codeforces.com/problemset/problem/320/A
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
		if (!((s[i] == '1') || (s[i] == '4' && s[i - 1] == '1') || (s[i] == '4' && s[i -1] == '4' && s[i - 2] == '1')))
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
