//https://codeforces.com/group/Rv2Qzg0DgK/contest/272491/problem/V
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
	int n, m;
	cin >> n >> m;
	int a[n], b[m] = {};
	for (auto& elem : a)
	{
		cin >> elem;
		b[elem - 1]++;
	}
	for (auto& elem : b) cout << elem << "\n";
}
