//https://codeforces.com/group/Rv2Qzg0DgK/contest/287283/problem/E
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

void solve ()
{
    int n, pre = 1, x;
    bool chk;
    cin >> n;
    stack<int> s1, s2;
    for (int i = 0; i < n; ++i)
    {
        chk = true;
        cin >> x;
        if (x == pre)
        {
            s1.push (x);
            pre++;
        }
        else s2.push (x);
        while (chk && !s2.empty ())
        {
            if (s2.size () && s2.top () == pre)
            {
             s2.pop ();
             s1.push (pre);
             pre++;
            }
            else chk = false;
        }
    }
    chk ? cout << "YES\n" : cout << "NO\n";
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

