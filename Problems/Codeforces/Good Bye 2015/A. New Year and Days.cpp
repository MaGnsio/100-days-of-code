//https://codeforces.com/problemset/problem/611/A
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
	string t ,s;
	cin >> n >> t >> s;
	if (s[0] == 'w')
	{
		cout << (n == 5 || n == 6 ? 53 : 52);
	}
	else
	{
		if (n == 31) cout << 7;
		else if (n > 29) cout << 11;
		else cout << 12;
	}
}
