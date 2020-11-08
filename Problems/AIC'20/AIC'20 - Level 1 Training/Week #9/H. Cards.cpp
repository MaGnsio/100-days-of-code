//https://codeforces.com/group/Rv2Qzg0DgK/contest/287283/problem/H
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        bool chk = true;
        vector<int> v;
        deque<int> d;
        cin >> n;
        for (int i = n; i > 0; --i) d.push_back (i);
        while (d.size () > 1)
        {
            if (chk)
            {
                v.push_back (d.back ());
                d.pop_back ();
                chk = false;
            }
            else
            {
                d.push_front (d.back ());
                d.pop_back ();
                chk = true;
            }
        }
        for (auto& elem : v) cout << elem << " ";
        cout << "\n" << d[0] << "\n";
    }
}

