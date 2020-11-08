//https://codeforces.com/group/Rv2Qzg0DgK/contest/287283/problem/D
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
    string s;
    stack<char> _s;
    cin >> s;
    for (int i = 0; i < s.size (); ++i)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') _s.push (s[i]);
        else if (s[i] == ')')
        {
            if (!_s.empty () && _s.top () == '(') _s.pop ();
            else
            {
                cout << "no";
                return 0;
            }
        }
        else if (!_s.empty () && s[i] == ']')
        {
            if (_s.top () == '[') _s.pop ();
            else
            {
                cout << "no";
                return 0;
            }
        }
        else if (!_s.empty () && s[i] == '}')
        {
            if (_s.top () == '{') _s.pop ();
            else
            {
                cout << "no";
                return 0;
            }
        }
    }
    cout << "yes";
}

