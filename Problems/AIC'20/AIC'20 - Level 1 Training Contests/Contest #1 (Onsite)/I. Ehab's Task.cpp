//https://codeforces.com/group/aDFQm4ed6d/contest/271778/problem/I
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
    ll a[n];
    for (auto& elem : a) cin >> elem;
    for (ll i = 1; i < n; i++) a[i] -= a[i - 1];
    if (a[n - 1] == 0ll) cout << "YES";
    else cout << "NO";
}

