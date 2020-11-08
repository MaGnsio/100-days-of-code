//https://codeforces.com/group/Rv2Qzg0DgK/contest/287283/problem/I
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

bool is_sorted (deque<pair<int, bool>> d)
{
    for (int i = 0; i < d.size (); ++i)
    {
        for (int j = i + 1; j < d.size (); ++j)
        {
            if (d[j].F > d[i].F) return false;
        }
    }
    return true;
}
void solve ()
{
        int n, m, s = 0;
        cin >> n >> m;
        deque<pair<int, bool>> d(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> d[i].F;
            if (i == m) d[i].S = true;
        }
        while (!is_sorted (d))
        {
            bool chk = true;
            for (int i = s + 1; i < n; ++i)
            {
                if (d[s].F < d[i].F)
                {
                    d.push_back (make_pair (d[s].F, d[s].S));
                    d.erase (d.begin () + s);
                    chk = false;
                    break;
                }
            }
            if (chk) s++;
        }
        for (int i = 0; i < n; ++i)
        {
            if (d[i].S == true)
            {
                cout << i + 1 << "\n";
                return;
            }
        }
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
    int t;
    cin >> t;
    while (t--)
    {
        solve ();
    }
}
