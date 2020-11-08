//https://codeforces.com/group/Rv2Qzg0DgK/contest/290492/problem/A
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
    set<int> _s;
    cin >> n;
    while (n--)
    {
        cin >> s >> x;
        if (s == "lower_bound")
        {
            if (_s.lower_bound (x) == _s.end ()) cout << -1 << "\n";
            else cout << *_s.lower_bound (x) << "\n";
        }
        if (s == "upper_bound")
        {
            if (_s.upper_bound (x) == _s.end ()) cout << -1 << "\n";
            else cout << *_s.upper_bound (x) << "\n";
        }
        if (s == "insert")
        {
            _s.insert (x);
        }
        if (s == "find")
        {
            if (_s.find (x) == _s.end ()) cout << "not found\n";
            else cout << "found\n";
        }
    }
}

