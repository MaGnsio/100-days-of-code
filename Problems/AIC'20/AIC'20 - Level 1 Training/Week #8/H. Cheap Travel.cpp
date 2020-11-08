//https://codeforces.com/group/Rv2Qzg0DgK/contest/286457/problem/H
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
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	cout << min ({n * a, ((n + m - 1) / m) * b, ((n % m) * a) + ((n - (n % m)) / m * b)});
}
