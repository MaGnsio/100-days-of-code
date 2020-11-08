//https://codeforces.com/group/Rv2Qzg0DgK/contest/276233/problem/N
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

void shift0 (int a[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == 0)
		{
			for (int j = n - 1; j > i; --j)
			{
				if (a[j] != 0) swap (a[i], a[j]);
			}
		}
	}
}

int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int n;
	cin >> n;
	int a[n];
	for (auto& elem : a) cin >> elem;
	shift0 (a, n);
	for (auto& elem : a) cout << elem << " ";
}
