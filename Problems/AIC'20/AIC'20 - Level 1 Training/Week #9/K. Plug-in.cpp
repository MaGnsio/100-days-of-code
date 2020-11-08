//https://codeforces.com/group/Rv2Qzg0DgK/contest/287283/problem/K
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
    string s, ans;
    cin >> s;
    stack<char> _s;
    for (int i = 0; i < s.size (); ++i)
    {
        if (!_s.empty () && _s.top () == s[i]) _s.pop ();
        else _s.push (s[i]);
    }
    while (!_s.empty ())
    {
        ans.push_back (_s.top ());
        _s.pop ();
    }
    reverse (ans.begin (), ans.end ());
    cout << ans;
}

