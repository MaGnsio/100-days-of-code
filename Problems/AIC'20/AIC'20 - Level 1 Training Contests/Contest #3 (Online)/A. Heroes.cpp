//https://codeforces.com/group/aDFQm4ed6d/contest/272911/problem/A
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
	int n, p, q = 0;
	cin >> n >> p;
	int a[n];
	for (auto& elem : a)
	{
		cin >> elem;
		if (elem >= p) q++;
	}
	cout << (q / 3);
}
