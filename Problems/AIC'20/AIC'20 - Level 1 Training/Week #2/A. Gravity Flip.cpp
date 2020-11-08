//https://codeforces.com/group/Rv2Qzg0DgK/contest/271444/problem/A
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
	for (auto& elem : a) cin >> elem;
	sort (a, a + n);
	for (auto& elem : a) cout << elem << " ";

}
