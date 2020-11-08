//https://codeforces.com/group/aDFQm4ed6d/contest/271778/problem/H
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
    ll n, m, ans = 0;
    cin >> n >> m;
    vector<ll> v(n);
    for (auto& elem : v) cin >> elem;
    sort (v.begin (), v.end (), greater<ll> ());
    for (auto& elem : v)
    {
        m -= elem;
        ans++;
        if (m <= 0ll) break;
    }
    cout << (m <= 0ll ? ans : -1ll);
}

