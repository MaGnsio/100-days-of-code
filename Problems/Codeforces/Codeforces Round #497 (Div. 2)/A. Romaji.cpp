//https://codeforces.com/problemset/problem/1008/A
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
	int ans = 0;
	cin >> s;
	for (int i = 0; i < s.size (); ++i)
	{
		bool a = (s[i] == 'a' || s[i] == 'o' || s[i] == 'u');
		bool b = (s[i] == 'i' || s[i] == 'e' || s[i] == 'n');
		bool c = (s[i + 1] == 'a' || s[i + 1] == 'o' || s[i + 1] == 'u');
		bool d = (s[i + 1] == 'i' || s[i + 1] == 'e');
		if (!(a || b) && !((c || d) && i < s.size () - 1)) ans = 1;
	}
	cout << (ans ? "NO" : "YES");
}
