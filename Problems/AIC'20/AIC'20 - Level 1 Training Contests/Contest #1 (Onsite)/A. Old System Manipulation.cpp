//https://codeforces.com/group/aDFQm4ed6d/contest/271778/problem/A
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
    ll n, m, x, sum = 0;
    cin >> n >> m;
    for (ll i = 0; i < n; ++i)
    {
        cin >> x;
        sum += x;
        if (sum >= m)
        {
            cout << m;
            return 0;
        }
    }
    cout << sum;
}

