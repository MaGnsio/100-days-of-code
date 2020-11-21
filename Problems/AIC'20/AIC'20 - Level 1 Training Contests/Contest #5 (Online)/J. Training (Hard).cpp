//https://codeforces.com/group/aDFQm4ed6d/contest/273592/problem/J
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
    string s;
    cin >> n;
    unordered_multiset<string> m;
    for (ll i = 1; i <= n; ++i)
    {
        cin >> s;
        if (m.count (s) < 3)
        {
            cout << i << "\n";
            m.insert (s);
        }
    }
}

