//https://codeforces.com/group/Rv2Qzg0DgK/contest/270964/problem/U
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
	int d, chk = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size (); ++i) if (s[i] == '.') d = i;
	for (int i = d + 1; i < s.size (); ++i) if (s[i] != '0') chk++;
	if (chk)
	{
		cout << "float ";
		for (int i = 0; i < d; ++i) cout << s[i];
		cout << " 0.";
		for (int i = d + 1; i < s.size (); ++i) cout << s[i];
	}
	else
	{
		cout << "int ";
		for (int i = 0; i < d; ++i) cout << s[i];
	}
}
