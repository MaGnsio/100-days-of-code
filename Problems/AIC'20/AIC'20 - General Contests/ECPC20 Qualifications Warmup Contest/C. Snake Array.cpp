//https://codeforces.com/group/nVgev28wQI/contest/303358/problem/C
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int main ()
{
    freopen ("snake.in", "r", stdin);
    ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
    int n, ctr = 1, temb = 1;
    cin >> n;
    while (ctr <= n)
    {
        cout << temb << " ";
        if (ctr & 1)
        {
            if (temb + n > n * n)
            {
                temb++;
                ctr++;
            }
            else temb += n;
        }
        else
        {
            if (temb - n <= 0)
            {
                temb++;
                ctr++;
            }
            else temb -= n;
        }
    }
}

