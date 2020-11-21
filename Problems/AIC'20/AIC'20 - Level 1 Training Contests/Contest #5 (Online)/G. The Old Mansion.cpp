//https://codeforces.com/group/aDFQm4ed6d/contest/273592/problem/G
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
    ll n, m, s, e;
    cin >> n >> m;
    int a[n + 2] = {};
    while(m--)
    {
        cin >> s >> e;
        a[s]++, a[e + 1]--;
    }
    for(ll i = 1; i < n + 2; ++i) a[i] += a[i - 1];
    for(int i = 1; i <= n; ++i)
    {
        if (a[i] % 2) cout << "ON\n";
        else cout << "OFF\n";
    }
}

