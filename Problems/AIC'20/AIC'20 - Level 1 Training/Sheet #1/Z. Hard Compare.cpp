//https://codeforces.com/group/Rv2Qzg0DgK/contest/270964/problem/Z
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
	unsigned long long a, b, c, d;
	cin >> a >> b >> c >> d;
	if (b * log (a) > d * log (c)) cout << "YES";
	else cout << "NO";
}
