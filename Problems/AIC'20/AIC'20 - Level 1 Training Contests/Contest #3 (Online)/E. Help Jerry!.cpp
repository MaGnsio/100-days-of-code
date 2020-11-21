//https://codeforces.com/group/aDFQm4ed6d/contest/272911/problem/E
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
    ll n, scr = 0;
    cin >> n;
    ll j[n], t[n];
    for (auto& elem : j) cin >> elem;
    for (auto& elem : t) cin >> elem;
    sort (j, j + n, greater<ll> ());
    sort (t, t + n);
    for (ll i = 0; i < n; ++i)
    {
        if (j[i] - t[i] >= 0) scr += j[i] - t[i];
    }
    cout << scr;
}

