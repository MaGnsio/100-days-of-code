//https://codeforces.com/group/Rv2Qzg0DgK/contest/273784/problem/C
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
	string s, t;
	cin >> s >> t;
	cout << (s.compare (t) > 0 ? t : s);
}
