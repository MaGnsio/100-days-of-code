//https://codeforces.com/problemset/problem/1107/A
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
		int n;
		string s;
		cin >> n >> s;
		if (n == 2 && (s[0] >= s[1])) cout << "NO\n";
		else
		{
			cout << "YES\n2\n" << s[0] << " ";
			for (int i = 1; i < n; ++i) cout << s[i];
			cout << "\n";
		}
	}
}
