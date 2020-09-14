//https://codeforces.com/problemset/problem/572/A
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
	int na, nb, k, m, ctr = 0;
	cin >> na >> nb >> k >> m;
	int arra[na], arrb[nb];
	for (auto& elem : arra) cin >> elem;
	for (auto& elem : arrb) cin >> elem;
	for (int i = 0; i < nb; ++i)
	{
		if (arra[k - 1] < arrb[i]) ctr++;
		if (ctr == m) break;
	}
	if (ctr == m)
		cout << "YES";
	else
		cout << "NO";
}
