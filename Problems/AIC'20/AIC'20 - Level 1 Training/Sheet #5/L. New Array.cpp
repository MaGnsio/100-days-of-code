//https://codeforces.com/group/Rv2Qzg0DgK/contest/276233/problem/L
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

void new_arr (vector<int> a, vector<int> b, int n, vector<int> &v)
{
	for (int i = 0; i < n; ++i) v.push_back (b[i]);
	for (int i = 0; i < n; ++i) v.push_back (a[i]);
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int n;
	cin >> n;
	vector<int> a(n), b(n), v;
	for (auto& elem : a) cin >> elem;
	for (auto& elem : b) cin >> elem;
	new_arr (a, b, n, v);
	for (auto& elem : v) cout << elem << " ";
}
