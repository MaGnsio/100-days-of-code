//https://codeforces.com/group/aDFQm4ed6d/contest/272103/problem/H
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
    ll n;
    cin >> n;
    ll a[n - 1];
    for (auto& elem : a) cin >> elem;
    sort (a, a + n);
    for (ll i = 0; i < n - 1; ++i)
    {
        if (a[i] != i + 1)
        {
            cout << i + 1;
            return 0;
        }
    }
    cout << n;
}

