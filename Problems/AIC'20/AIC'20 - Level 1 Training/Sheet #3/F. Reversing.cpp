//https://codeforces.com/group/Rv2Qzg0DgK/contest/272491/problem/F
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
	vector<int> v(n);
	for (auto& elem : v) cin >> elem;
	reverse (v.begin (), v.end ());
	for (auto& elem : v) cout << elem << " ";
}
