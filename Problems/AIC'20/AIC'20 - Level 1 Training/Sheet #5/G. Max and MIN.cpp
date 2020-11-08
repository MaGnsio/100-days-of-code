//https://codeforces.com/group/Rv2Qzg0DgK/contest/276233/problem/G
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int max_elem (int a[], int n)
{
	int ma = 0;
	for (int i = 0; i < n; ++i) ma = max (ma, a[i]);
	return ma;
}
int min_elem (int a[], int n)
{
	int mi = INT_MAX;
	for (int i = 0; i < n; ++i) mi = min (mi, a[i]);
	return mi;
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int n;
	cin >> n;
	int a[n];
	for (auto& elem : a) cin >> elem;
	cout << min_elem (a, n) << " " << max_elem (a, n);
}
