//https://codeforces.com/group/Rv2Qzg0DgK/contest/270964/problem/O
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int tenpow (int x)
{
	int res = 1;
	while (x--) res *= 10;
	return res;
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int a, b = 0;
	string s;
	cin >> a >> s;
	for (int i = 1; i < s.size (); ++i) b += tenpow (s.size () - i - 1) * (s[i] - '0');
	if (s[0] == '-') cout << a - b;
	if (s[0] == '+') cout << a + b;
	if (s[0] == '/') cout << a / b;
	if (s[0] == '*') cout << a * b;
}
