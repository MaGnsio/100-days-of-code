//https://codeforces.com/group/aDFQm4ed6d/contest/272911/problem/J
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
    ll n, x;
    cin >> n;
    set<ll> s;
    while (n--)
    {
        cin >> x;
        if (x) s.insert (x);
    }
    cout << s.size () * 30;
}

