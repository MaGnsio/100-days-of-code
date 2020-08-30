//https://codeforces.com/contest/1397/problem/A
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

void solve ()
{
	int n;
	cin >> n;
	int farr[26] = {};
	string s;
	for (int i = 0; i < n; ++i)
	{
		string a;
		cin >> a;
		s += a;
	}
	for (int i = 0; i < s.size (); ++i)
	{
		farr[int(s[i]) - 97]++;
	}
	for (int i = 0; i < 26; ++i)
	{
		if (farr[i] % n)
		{
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
	return;
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int t;
	cin >> t;
	while (t--)
	{
		solve ();
	}
}
