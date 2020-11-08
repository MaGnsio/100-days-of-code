//https://codeforces.com/group/Rv2Qzg0DgK/contest/287283/problem/J
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
    int n, m, x, o, w, r = 0, h, f = 1, b = 2;
    deque<int> q;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        q.push_back (x);
    }
    while (m--)
    {
        cin >> o;
        if (o == 1)
        {
            swap (f, b);
            r++;
        }
        if (o == 2)
        {
            cin >> w >> h;
            if (w == f) q.push_front (h);
            else if (w == b) q.push_back (h);
        }
    }
    if (r % 2) reverse (q.begin (), q.end ());
    cout << q.size () << "\n";
    for (auto& elem : q) cout << elem << " ";

}

