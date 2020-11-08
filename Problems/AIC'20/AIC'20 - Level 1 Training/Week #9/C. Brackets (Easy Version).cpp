//https://codeforces.com/group/Rv2Qzg0DgK/contest/287283/problem/C
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
    int l = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size (); ++i)
    {
        if (s[i] == '(') l++;
        if (s[i] == ')') l--;
        if (l < 0)
        {
            cout << "no";
            return 0;
        }
    }
    if (l == 0) cout << "yes";
    else cout << "no";
}

