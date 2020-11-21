//https://codeforces.com/group/nVgev28wQI/contest/303358/problem/M
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int main ()
{
    freopen ("shower.in", "r", stdin);
    ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
    ll n, t, sum = 0;
    cin >> n >> t;
    ll a[n];
    for (auto& elem : a) cin >> elem;
    for (ll i = 0; i < n - 1; ++i)
    {
        if (a[i + 1] - a[i] >= t)  sum += t;
        else sum += (a[i + 1] - a[i]);
    }
    cout << sum ;
}

