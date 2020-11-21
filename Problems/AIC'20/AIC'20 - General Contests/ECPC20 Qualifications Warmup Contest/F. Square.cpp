//https://codeforces.com/group/nVgev28wQI/contest/303358/problem/F
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int main ()
{
    freopen("square.in", "r", stdin);
    ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
    ll n, s = 0;
    double d;
    cin >> n;
    for(int i = n; i > 0; --i)
    {
        d = sqrt (i);
        s = d;
        if(d == s)
        {
            cout << i;
            return 0;
        }
    }
}

