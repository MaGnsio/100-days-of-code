//https://codeforces.com/group/nVgev28wQI/contest/303358/problem/L
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int main ()
{
    freopen ("cinema.in", "r", stdin);
    ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
    ll x, y, z;
    cin >> x >> y >> z;
    cout << (x - z) / (y + z);
}

