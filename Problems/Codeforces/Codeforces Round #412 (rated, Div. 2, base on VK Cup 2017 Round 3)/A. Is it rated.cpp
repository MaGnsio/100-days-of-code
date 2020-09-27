//https://codeforces.com/problemset/problem/807/A
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
	int a[n], b[n];
	bool chk1 = false, chk2 = true;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		cin >> b[i];
		if (a[i] != b[i]) chk1 = true;
		if (i > 0 && a[i] > a[i - 1]) chk2 = false;
	}
	if (chk1) cout << "rated";
	else if (chk2) cout << "maybe";
	else cout << "unrated";
}
