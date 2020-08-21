//https://codeforces.com/problemset/problem/1335/B
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
		string s = "abcdefghijklmnopqrstuvwxyz";
		int n, a, b;
		cin >> n >> a >> b;
		if (a > b)
		{
			string s1 = s.substr (0, b);
			for (int i = 0; i < n; ++i)
			{
				cout << s1[i % b];
			}
		}
		else if (a == b)
		{
			for (int i = 0; i < n; ++i)
			{
				cout << s[i % b];
			}
		}
		cout << "\n";
	}
}
