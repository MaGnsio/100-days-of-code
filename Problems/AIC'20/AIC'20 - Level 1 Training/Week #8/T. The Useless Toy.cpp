//https://codeforces.com/group/Rv2Qzg0DgK/contest/286457/problem/T
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
	char s, e;
	cin >> s >> e >> n;
	map<char, int> mp;
	mp['^'] = 1;
	mp['>'] = 2;
	mp['v'] = 3;
	mp['<'] = 4;
	int temp = (mp[e] - mp[s] + 4) % 4;
	if (temp == 0 || temp == 2) cout << "undefined";
	else if (temp == n % 4) cout << "cw";
	else cout << "ccw";
}
