//https://codeforces.com/group/nVgev28wQI/contest/303358/problem/I
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int main ()
{
    freopen ("tiles.in", "r", stdin);
    ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
    int r1 = 0, r2 = 0, b1 = 0, b2 = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size (); ++i)
    {
        if (i & 1)
        {
            if (s[i] == '0') r1++;
            else b1++;
        }
        else
        {
            if (s[i] == '0') r2++;
            else b2++;
        }
    }
    cout << min (r1 + b2, r2 + b1);
}

