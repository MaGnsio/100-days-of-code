//https://codeforces.com/group/aDFQm4ed6d/contest/273592/problem/B
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
    int n, m;
    cin >> n >> m;
    int a[n][n], b[m][m];
    for (auto& rows : a)
    {
        for (auto& elem : rows) cin >> elem;
    }
    for (auto& rows : b)
    {
        for (auto& elem : rows) cin >> elem;
    }
    int i = 0, j = 0;
    cout << n - m + 1 << "\n";
    while (j < n - m + 1)
    {
        int ans = 0;
        for (int k = 0; k < m; ++k)
        {
            for (int l = 0; l < m; ++l)
            {
                ans += (a[j + k][i + l] * b[k][l]);
            }
        }
        cout << ans << " ";
        i++;
        if (i == n - m + 1)
        {
            i = 0, j++;
            cout << "\n";
        }
    }
}

