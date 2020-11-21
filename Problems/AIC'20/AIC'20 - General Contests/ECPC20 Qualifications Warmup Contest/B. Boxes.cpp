//https://codeforces.com/group/nVgev28wQI/contest/303358/problem/B
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int main ()
{
    freopen ("boxes.in", "r", stdin);
    ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
    int b = 0, r = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size (); ++i)
    {
        if (s[i] == '1') b++;
        else r++;
    }
    cout << s.size ()  - abs (r - b);
}

