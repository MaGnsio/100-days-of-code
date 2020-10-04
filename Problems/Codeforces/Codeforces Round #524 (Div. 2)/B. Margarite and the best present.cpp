//https://codeforces.com/problemset/problem/1080/B
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
	int t;
	cin >> t;
	while (t--)
	{
		int l, r;
		cin >> l >> r;
		int n = r - l + 1;
		int n2 = n / 2, l2 = l + 1, r2 = (n % 2 ? r - 1 : r);
		int n1 = n - n2, l1 = l, r1 = (n % 2 ? r : r - 1);
		if (l % 2)
			cout << ((n2 * (l2 + r2)) - (n1 * (l1 + r1))) / 2 << "\n";
		else
			cout << ((n1 * (l1 + r1)) - (n2 * (l2 + r2))) / 2 << "\n";
	}
}
