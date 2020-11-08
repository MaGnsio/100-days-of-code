//https://codeforces.com/group/Rv2Qzg0DgK/contest/287283/problem/F
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
    string s;
    deque<int> d;
    cin >> n;
    while (n--)
    {
        cin >> s;
        if (s == "back")
        {
            if (d.empty ()) cout << "No job for Ada?\n";
            else
            {
                cout << d.back () << "\n";
                d.erase (d.end () - 1);
            }
        }
        if (s == "front")
        {
            if (d.empty ()) cout << "No job for Ada?\n";
            else
            {
                cout << d.front () << "\n";
                d.erase (d.begin ());
            }
        }
        if (s == "reverse")
        {
            reverse (d.begin (), d.end ());
        }
        if (s == "push_back")
        {
            cin >> x;
            d.push_back (x);
        }
        if (s == "toFront")
        {
            cin >> x;
            d.push_front (x);
        }
    }
}

