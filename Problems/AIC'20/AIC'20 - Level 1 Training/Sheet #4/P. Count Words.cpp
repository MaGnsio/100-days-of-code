//https://codeforces.com/group/Rv2Qzg0DgK/contest/273784/problem/P
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

bool islet (char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) return true;
	else return false;
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int ans = 0;
	string s;
	getline (cin, s);
	for (int i = 0; i < s.size (); ++i) if (islet (s[i]) && (!(islet (s[i + 1])) || i == s.size () - 1)) ans++;
	cout << ans;
}
