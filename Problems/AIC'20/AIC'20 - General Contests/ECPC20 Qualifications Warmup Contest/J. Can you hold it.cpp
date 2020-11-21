//https://codeforces.com/group/nVgev28wQI/contest/303358/problem/J
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int main ()
{
    freopen ("misbaha.in", "r", stdin);
    ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
    ll n, a, b, m = 1e5;
    ll freq[m] = {};
    cin >> n;
    while (cin >> a >> b) freq[a - 1]++, freq[b - 1]++;
    cout << count (freq, freq + m, 1);
}

