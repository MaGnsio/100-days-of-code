//https://codeforces.com/group/Rv2Qzg0DgK/contest/272491/problem/B
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
	ll n, e, i;
	cin >> n;
	vector<ll> v(n);
	for (auto& elem : v) cin >> elem;
	cin >> e;
	auto it = find (v.begin (), v.end (), e);
	cout << (it != v.end () ? distance (v.begin (), it) : -1);
}
