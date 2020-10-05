//https://codeforces.com/problemset/problem/980/A
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
	int l = 0, p = 0;
	for (int i = 0; i < s.size (); ++i)
	{
		if (s[i] == '-') l++;
		else p++;
	}
	if (p == 0 || l == 0 || l % p == 0) cout << "YES";
	else cout << "NO";
}
