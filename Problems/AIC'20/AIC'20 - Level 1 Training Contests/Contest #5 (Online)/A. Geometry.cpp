//https://codeforces.com/group/aDFQm4ed6d/contest/273592/problem/A
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
    ld r1, x1, y1, r2, x2, y2, dx, dy, d;
    cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2;
    dx = (x2 - x1) * (x2 - x1), dy = (y2 - y1) * (y2 - y1);
    d = sqrt (dx + dy);
    if (d + r2 <= r1) cout << "YES";
    else cout << "NO";
}

