//https://codeforces.com/group/Rv2Qzg0DgK/contest/286457/problem/R
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
	ll a, b, c;
	cin >> a >> b >> c;
	if ((a == b) || (a > b && c < 0 && (a - b) % c == 0) || (a < b && c > 0 && (b - a) % c == 0)) cout << "YES";
	else cout << "NO";
}
