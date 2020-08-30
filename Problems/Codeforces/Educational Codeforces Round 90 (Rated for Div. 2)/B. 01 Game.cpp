//https://codeforces.com/problemset/problem/1373/B
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
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int z = 0, o = 0;
		for (int i = 0; i < s.size (); ++i)
		{
			if (s[i] == '0')
			{
				z++;
			}
			else
			{
				o++;
			}
		}
		if (min (z, o) % 2)
		{
			cout << "DA\n";
		}
		else
		{
			cout << "NET\n";
		}
	}
}
