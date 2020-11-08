//https://codeforces.com/group/Rv2Qzg0DgK/contest/272491/problem/R
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
	int a[n], b[n];
	for (auto& elem : a) cin >> elem;
	sort (a, a + n);
	for (auto& elem : b) cin >> elem;
	sort (b, b + n);
	for (int i = 0; i < n; ++i)
	{
		if (a[i] != b[i])
		{
			cout << "no";
			return 0;
		}
	}
	cout << "yes";
}
