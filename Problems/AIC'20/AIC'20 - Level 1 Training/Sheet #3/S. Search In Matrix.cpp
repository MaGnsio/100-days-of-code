//https://codeforces.com/group/Rv2Qzg0DgK/contest/272491/problem/S
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
	int n, m, x;
	cin >> n >> m;
	vector<int> v(n * m);
	for (auto& elem : v) cin >> elem;
	cin >> x;
	vector<int>::iterator it = find (v.begin (), v.end (), x);
	if (it != v.end ()) cout << "will not take number";
	else cout << "will take number";
}
