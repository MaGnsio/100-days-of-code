//https://codeforces.com/group/aDFQm4ed6d/contest/271778/problem/F
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
    ll n, m;
    cin >> n >> m;
    ll la = 0, ra = m;
    while (n--)
    {
        ll l, r;
        cin >> l >> r;
        ll a[4] = {ra, r, l, la};
        sort (a, a + 4);
        if (l <= ra && la <= r)
        {
            la = a[1];
            ra = a[2];
        }
        else
        {
            cout << 0;
            return 0;
        }
    }
    cout << ra - la + 1;
}

