//https://codeforces.com/group/aDFQm4ed6d/contest/273592/problem/E
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
    int freq[26] = {};
    string s;
    cin >> s;
    for (int i = 0; i < s.size (); ++i)
    {
        if (!freq[s[i] - 'a'])
        {
            cout << i + 1 << "\n";
            freq[s[i] - 'a']++;
        }
    }
}

