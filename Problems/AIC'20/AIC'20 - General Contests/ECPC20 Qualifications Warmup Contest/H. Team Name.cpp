//https://codeforces.com/group/nVgev28wQI/contest/303358/problem/H
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int main ()
{
    freopen ("teams.in", "r", stdin);
    ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
    ll n, mx = 0;
    string ipt, ans;
    set<string> s;
    map<string, ll> m;
    cin >> n;
    for (ll i = 0; i < 3 * n; ++i)
    {
        cin >> ipt;
        s.insert (ipt);
        m[ipt]++;
    }
    for (auto& x : s)
    {
        if (m[x] > mx)
        {
            mx = m[x];
            ans = x;
        }
    }
    cout << ans;
}

