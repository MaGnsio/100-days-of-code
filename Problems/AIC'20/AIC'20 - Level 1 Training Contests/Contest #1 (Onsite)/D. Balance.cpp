//https://codeforces.com/group/aDFQm4ed6d/contest/271778/problem/D
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
    ll a, b;
    cin >> a >> b;
    if (a - b == 0) cout << 0;
    else if (a > b) cout << a - b << " R";
    else cout << b - a << " L";
}

