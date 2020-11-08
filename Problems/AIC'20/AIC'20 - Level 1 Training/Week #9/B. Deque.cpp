//https://codeforces.com/group/Rv2Qzg0DgK/contest/287283/problem/B
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
    deque<int> d;
    cin >> t;
    while (t--)
    {
        int x;
        string s;
        cin >> s;
        if (s == "push_back")
        {
            cin >> x;
            d.push_back (x);
        }
        if (s == "pop_back") d.pop_back ();
        if (s == "push_front")
        {
            cin >> x;
            d.push_front (x);
        }
        if (s == "pop_front") d.pop_front ();
        if (s == "front") cout << d.front () << "\n";
        if (s == "back") cout << d.back () << "\n";
        if (s == "print")
        {
            cin >> x;
            cout << d[x - 1] << "\n";
        }
    }

}

