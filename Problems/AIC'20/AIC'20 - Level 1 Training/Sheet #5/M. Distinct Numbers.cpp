//https://codeforces.com/group/Rv2Qzg0DgK/contest/276233/problem/M
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int dis_no (int a[], int n)
{
	set<int> s;
	for (int i = 0; i < n; ++i) s.insert (a[i]);
	return s.size ();
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int n;
	cin >> n;
	int a[n];
	for (auto& elem : a) cin >> elem;
	cout << dis_no (a, n);
}
