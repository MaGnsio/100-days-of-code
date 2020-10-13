//https://codeforces.com/problemset/problem/118/A
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

bool is_vow (char c)
{
	if (c=='a'||c=='o'||c=='y'||c=='e'||c=='u'||c=='i') return true;
	if (c=='A'||c=='O'||c=='Y'||c=='E'||c=='U'||c=='I') return true;
	else return false;
}
bool is_let (char c)
{
	if ((c>='A' && c<='Z') || (c>='a' && c<='z')) return true;
	else return false;
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	string s, a;
	cin >> s;
	for (int i = 0; i < s.size (); ++i)
	{
		if (is_let (s[i]) && !is_vow (s[i]))
		{
			char temb = tolower (s[i]);
			cout << "." << temb;
		}
	}
}
