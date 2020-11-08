//https://codeforces.com/group/Rv2Qzg0DgK/contest/287283/problem/M
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
    int n;
    string s;
    stack<string> _s;
    cin >> n >> s;
    if (n % 2)
    {
        cout << "WA";
        return 0;
    }
    if (s == "Header")
    {
        _s.push (s);
        n--;
    }
    else
    {
        cout << "WA";
        return 0;
    }
    while (n > 1)
    {
        cin >> s;
        if (s == "Row" || s == "Cell" || s == "Table") _s.push (s);
        else if (s == "EndRow")
        {
            if (_s.top () == "Row") _s.pop ();
            else
            {
                cout << "WA";
                return 0;
            }
        }
        else if (s == "EndCell")
        {
            if (_s.top () == "Cell") _s.pop ();
            else
            {
                cout << "WA";
                return 0;
            }
        }
        else if (s == "EndTable")
        {
            if (_s.top () == "Table") _s.pop ();
            else
            {
                cout << "WA";
                return 0;
            }
        }
        else
        {
            cout << "WA";
            return 0;
        }
        n--;
    }
    if (n == 1 && _s.size () == 1)
    {
        cin >> s;
        if (s == "EndHeader") cout << "ACC";
        else cout << "WA";
    }
    else
    {
        cout << "WA";
    }
}

