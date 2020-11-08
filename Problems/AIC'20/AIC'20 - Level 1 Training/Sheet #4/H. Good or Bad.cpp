//https://codeforces.com/group/Rv2Qzg0DgK/contest/273784/problem/H
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

void solve ()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size () - 2; ++i)
	{
		if (s.substr (i, 3) == "101" || s.substr (i, 3) == "010")
		{
			cout << "Good\n";
			return;
		}
	}
	cout << "Bad\n";
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
