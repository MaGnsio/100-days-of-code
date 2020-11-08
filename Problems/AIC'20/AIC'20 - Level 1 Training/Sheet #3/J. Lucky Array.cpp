//https://codeforces.com/group/Rv2Qzg0DgK/contest/272491/problem/J
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
	int n, ans = 1;
	cin >> n;
	int a[n];
	for (auto& elem : a) cin >> elem;
	sort (a, a + n);
	for (int i = 1; i < n; ++i)
	{
		if (a[i] == a[i - 1]) ans++;
		else break;
	}
	if (ans % 2) cout << "Lucky";
	else cout << "Unlucky";
}
