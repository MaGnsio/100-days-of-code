//https://codeforces.com/problemset/problem/556/A
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
	int n, z = 0, o = 0;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n; ++i)
	{
		if (s[i] == '1')
		{
			o++;
		}
		else
		{
			z++;
		}
	}
	cout << abs (z - o);
}
