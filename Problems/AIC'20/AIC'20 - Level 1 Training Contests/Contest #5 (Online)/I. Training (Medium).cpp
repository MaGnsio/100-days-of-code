//https://codeforces.com/group/aDFQm4ed6d/contest/273592/problem/I
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
    int n, x;
    unordered_multiset<int> m;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        if (m.count (x) < 3)
        {
            cout << i << "\n";
            m.insert (x);
        }
        if (m.size () == 3000) break;
    }
}

