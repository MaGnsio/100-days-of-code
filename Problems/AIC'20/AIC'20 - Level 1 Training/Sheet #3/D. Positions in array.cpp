//https://codeforces.com/group/Rv2Qzg0DgK/contest/272491/problem/D
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
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		if (a[i] <= 10) cout << "A[" << i << "] = " << a[i] << "\n";
	}
}
