//https://codeforces.com/problemset/problem/913/A
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
	ll n, m;
	cin >> n >> m;
	cout << (n >= 32 ? m : m % (1 << n));
}
