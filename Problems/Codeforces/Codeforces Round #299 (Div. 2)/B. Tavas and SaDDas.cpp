//https://codeforces.com/problemset/problem/535/B
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

ll binary (string s)
{
	ll ans = 0;
	for (int i = 0; i < s.size (); ++i)
		ans = ((2ll * ans) + (ll) (s[i] - '0'));
	ll p = 1ll;
	for (int i = 0; i < s.size (); ++i)
		p = (p << 1);
	ans += p - 1ll;
	return ans;	
}
string lu (string s)
{
	for (int i = 0; i < s.size (); ++i)
		s[i] = (s[i] == '4' ? '0' : '1');
	return s;
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	string s;
	cin >> s;
	cout << binary (lu (s));
}
