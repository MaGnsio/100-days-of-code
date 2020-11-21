//https://codeforces.com/group/aDFQm4ed6d/contest/272103/problem/C
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
    int n, m, ans = 0;
    cin >> n >> m;
    char a[n][m];
    for (auto& row : a)
    {
        for (auto& elem : row) cin >> elem;
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (a[i][j] == '.'
                && (i - 1 < 0 || j - 1 < 0 || a[i - 1][j - 1] != 'm')
                && (i - 1 < 0 || a[i - 1][j] != 'm')
                && (i - 1 < 0 || j + 1 >= m || a[i - 1][j + 1] != 'm')
                && (j - 1 < 0 || a[i][j - 1] != 'm')
                && (j + 1 >= m || a[i][j + 1] != 'm')
                && (i + 1 >= n || j - 1 < 0 || a[i + 1][j - 1] != 'm')
                && (i + 1 >= n || a[i + 1][j] != 'm')
                && (i + 1 >= n || j + 1 >= m || a[i + 1][j + 1] != 'm')
               ) ans++;
        }
    }
    cout << ans;
}

