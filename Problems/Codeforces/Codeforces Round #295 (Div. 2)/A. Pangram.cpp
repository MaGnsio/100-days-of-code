//https://codeforces.com/problemset/problem/520/A
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
	int n;
	cin >> n;
	char s[n];
	int farr[26] = {};
	cin >> s;
	for (int i = 0; i < n; ++i)
	{
		if (s[i] < 91)
		{
			farr[s[i] - 65]++;
		}
		else
		{
			farr[s[i] - 97]++;
		}
	}
	for (int i = 0; i < 26; ++i)
	{
		if (!farr[i])
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}
