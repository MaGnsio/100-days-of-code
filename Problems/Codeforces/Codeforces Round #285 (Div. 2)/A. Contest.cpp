//https://codeforces.com/problemset/problem/501/A
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
	int p1, p2, t1, t2;
	cin >> p1 >> p2 >> t1 >> t2;
	int m = max ((3 * p1) / 10, p1 - ((p1 / 250) * t1));
	int v = max ((3 * p2) / 10, p2 - ((p2 / 250) * t2));
	if (m > v) cout << "Misha";
	else if (v > m) cout << "Vasya";
	else cout << "Tie";
}
