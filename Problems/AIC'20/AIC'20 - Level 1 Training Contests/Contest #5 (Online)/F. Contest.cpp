//https://codeforces.com/group/aDFQm4ed6d/contest/273592/problem/F
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
    ll n, m, sum = 0, ctr = 0;
    cin >> n >> m;
    ll a[n];
    for (auto& elem : a) cin >> elem;
    sort(a, a + n);
    for (auto& elem : a)
    {
        sum += elem;
        if(sum <= m) ctr++;
        else break;
    }
    cout << ctr;
}
