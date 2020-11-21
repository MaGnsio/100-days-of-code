//https://codeforces.com/group/aDFQm4ed6d/contest/272103/problem/G
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
    cin >> n;
    cout << n / 2 << "\n";
    for (int i = 1; i < n / 2; ++i) cout << 2 << " ";
    cout << (n % 2 ? 3 : 2);
}

