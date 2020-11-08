//https://codeforces.com/group/Rv2Qzg0DgK/contest/290492/problem/B
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
    ll n, q, a, w;
    string s;
    map<string, ll> m;
    cin >> n >> q;
    while (n--)
    {
        cin >> s >> a;
        m[s] = a;
    }
    while (q--)
    {
        cin >> w >> s;
        if (w == 1)
        {
            cin >> a;
            m[s] += a;
        }
        else if (w == 2)
        {
            cout << m[s] << "\n";
        }
    }
}

