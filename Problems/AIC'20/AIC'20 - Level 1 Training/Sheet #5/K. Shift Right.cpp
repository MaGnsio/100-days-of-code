//https://codeforces.com/group/Rv2Qzg0DgK/contest/276233/problem/K
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

void shiftR (vector<int>& v,int n, int ns)
{
	if (ns > 1) shiftR (v, n, ns - 1);
	v.insert (v.begin (), v[n - 1]);
	v.erase (v.begin () + n);
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int n, ns;
	cin >> n >> ns;
	vector<int> v(n);
	for (auto& elem : v) cin >> elem;
	shiftR (v, n, ns);
	for (auto& elem : v) cout << elem << " ";
}
