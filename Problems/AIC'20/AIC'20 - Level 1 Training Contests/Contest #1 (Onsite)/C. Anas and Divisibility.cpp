//https://codeforces.com/group/aDFQm4ed6d/contest/271778/problem/C
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
    cin >> s;
    int x = (s[s.size () - 1] - '0') + ((s[s.size () - 2] - '0') * 10);
    if (x % 4 == 0) cout << "YES";
    else cout << "NO";
}

