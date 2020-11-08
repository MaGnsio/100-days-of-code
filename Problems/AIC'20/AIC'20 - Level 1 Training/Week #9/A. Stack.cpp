//https://codeforces.com/group/Rv2Qzg0DgK/contest/287283/problem/A
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
    stack<int> c;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "push")
        {
            int x;
            cin >> x;
            c.push (x);
        }
        if (s == "pop") c.pop ();
        if (s == "top") cout << c.top () << "\n";
    }
}

