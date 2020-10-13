//https://codeforces.com/problemset/problem/465/A
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
	string s;
	cin >> n >> s;
	while (s[ans] == '1' && ans < n) ans++;
	cout << min (ans + 1, n);
}
