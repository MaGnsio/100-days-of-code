//https://codeforces.com/group/nVgev28wQI/contest/303358/problem/E
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int main ()
{
    freopen ("geometry.in", "r", stdin);
    ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
    double l;
    cin >> l;
    double r = l / 2, pi = 3.141592653;
    double p_area = (((pi / 180) * 90) - 1) * (r * r);
    double c_area = pi * r * r;
    double s_area = l * l;
    cout << fixed << setprecision (6) << s_area - (c_area - p_area) << " ";
    cout << fixed << setprecision (6) << (2 * l) + (pi * r);
}

