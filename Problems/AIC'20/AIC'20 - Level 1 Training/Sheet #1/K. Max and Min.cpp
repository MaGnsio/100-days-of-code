//https://codeforces.com/group/Rv2Qzg0DgK/contest/270964/problem/K
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
	int a, b, c;
	cin >> a >> b >> c;
	cout << min ({a, b, c}) << " " << max ({a, b, c}); 
}
