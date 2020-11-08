//https://codeforces.com/group/Rv2Qzg0DgK/contest/287283/problem/G
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
    char turn = 'm';
    string m, a, r;
    cin >> m >> a >> r;
    reverse (m.begin (), m.end ());
    reverse (a.begin (), a.end ());
    reverse (r.begin (), r.end ());
    stack<char, string> _m (m), _a (a), _r (r);
    while (true)
    {
        if (turn == 'm')
        {
            if (_m.empty ())
            {
                cout << "M";
                return 0;
            }
            else
            {
                turn = _m.top ();
                _m.pop ();
            }
        }
        else if (turn == 'a')
        {
            if (_a.empty ())
            {
                cout << "A";
                return 0;
            }
            else
            {
                turn = _a.top ();
                _a.pop ();
            }
        }
        else if (turn == 'r')
        {
            if (_r.empty ())
            {
                cout << "R";
                return 0;
            }
            else
            {
                turn = _r.top ();
                _r.pop ();
            }
        }
    }
}

