//https://codeforces.com/group/aDFQm4ed6d/contest/272103/problem/B
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, ans = 0;
        cin >> x;
        if (x == 0) ans += 6;
        while (x)
        {
            ll temb = x % 10;
            switch (temb)
            {
                case 0 : ans += 6;
                         break;
                case 1 : ans += 2;
                         break;
                case 2 : ans += 5;
                         break;
                case 3 : ans += 5;
                         break;
                case 4 : ans += 4;
                         break;
                case 5 : ans += 5;
                         break;
                case 6 : ans += 6;
                         break;
                case 7 : ans += 3;
                         break;
                case 8 : ans += 7;
                         break;
                case 9 : ans += 6;
                         break;
            }
            x /= 10;
        }
        cout << ans << "\n";
    }
}

