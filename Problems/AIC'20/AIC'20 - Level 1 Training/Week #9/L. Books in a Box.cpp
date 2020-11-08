//https://codeforces.com/group/Rv2Qzg0DgK/contest/287283/problem/L
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
    int n, o, x;
    vector<int> v;
    stack<int> s;
    cin >> n;
    while (n--)
    {
        cin >> o;
        if (o == 1)
        {
            cin >> x;
            s.push (x); 
        }
        if (o == 2 && !s.empty ()) s.pop ();
        if (o == 3 && !s.empty ()) v.push_back (s.top ());
    }
    for (auto& elem : v) cout << elem << "\n";
}

