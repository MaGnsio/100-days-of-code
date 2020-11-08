//https://codeforces.com/group/Rv2Qzg0DgK/contest/276233/problem/J
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

long double avg (long double a[], int n)
{
	long double sum = 0;
	for (int i = 0; i < n; ++i) sum += a[i];
	return sum / n;
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int n;
	cin >> n;
	long double a[n];
	for (auto& elem : a) cin >> elem;
	cout << fixed << setprecision (7) << avg (a, n);
}
