//https://codeforces.com/group/Rv2Qzg0DgK/contest/271445/problem/I
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
	ll n;
	cin >> n;
	ll nc = n, nr = 0;
	for (int i = nc; nc != 0; nc /= 10) nr = (nr * 10) + (nc % 10);
	cout << nr << "\n";
	if (nr == n) cout << "YES";
	else cout << "NO";
}
