//https://codeforces.com/group/aDFQm4ed6d/contest/272103/problem/F
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
    int a[n];
    for (auto& elem : a) cin >> elem;
    for (int i = 0; i < n - 2; ++i)
    {
        for (int j = i + 1; j < n - 1; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                if ((a[i] + a[j] + a[k]) % m == 0) ans++; 
            }
        }
    }
    cout << ans;
}

