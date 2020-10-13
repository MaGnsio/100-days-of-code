//https://codeforces.com/group/aDFQm4ed6d/contest/272911/problem/C
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
	cout << s << ":\n";
	if (s.size () > 2) cout << "Think again!";
	else if (s.size () == 1) cout << "I will help you.";
	else if (s[0] < '2' || (s[0] == '2' && s[1] == '0')) cout << "I will help you.";
	else cout << "Think again!";
}
