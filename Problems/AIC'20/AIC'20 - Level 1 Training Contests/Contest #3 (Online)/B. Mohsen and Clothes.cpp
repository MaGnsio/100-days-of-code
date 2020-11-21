//https://codeforces.com/group/aDFQm4ed6d/contest/272911/problem/B
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
    ll n, x, q, m;
    ll freq[1'000'001] = {};
    cin >> n;
    while (n--)
    {
        cin >> x;
        freq[x]++;
    }
    cin >> q;
    while (q--)
    {
        ll ans = LLONG_MAX;
        cin >> m;
        while (m--)
        {
            cin >> x;
            ans = min (ans, freq[x]);
        }
        cout << ans << " ";
    }
}

