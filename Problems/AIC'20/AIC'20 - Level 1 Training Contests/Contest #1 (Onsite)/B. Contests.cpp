//https://codeforces.com/group/aDFQm4ed6d/contest/271778/problem/B
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
    ll n, k;
    cin >> n >> k;
    cout << (k - (n % k) == k && n != 0 ? 0 : k - (n % k));
}

