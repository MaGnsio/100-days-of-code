//https://codeforces.com/group/aDFQm4ed6d/contest/272911/problem/I
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

bool bano (ll n)
{
    ll o = 0, e = 0;
    if (!n) e++;
    while (n)
    {
        ll temp = n % 10;
        if (temp & 1) o++;
        else e++;
        n /= 10;
    }
    return o == e;
}
int main ()
{
    ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
    ll t, a, b;
    ll dp[2'000'001] = {};
    for (ll i = 1; i < 2'000'001; ++i)
    {
        dp[i] = dp[i - 1];
        if (bano (i)) dp[i]++;
    }
    cin >> t;
    while (t--)
    {
        ll ans = 0;
        cin >> a >> b;
        cout << dp[b] - (a ? dp[a - 1] : 0) << "\n";
    }
}

