//https://codeforces.com/problemset/problem/785/A
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
	int n, ans = 0;
	cin >> n;
	while (n--)
	{
		string s;
		cin >> s;
		if (s[0] == 'T') {ans += 4;}
		else if (s[0] == 'C') {ans += 6;}
		else if (s[0] == 'O') {ans += 8;}
		else if (s[0] == 'D') {ans += 12;}
		else if (s[0] == 'I') {ans += 20;}
	}
	cout << ans;
}
