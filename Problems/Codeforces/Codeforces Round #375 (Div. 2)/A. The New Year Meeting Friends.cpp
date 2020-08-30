//https://codeforces.com/problemset/problem/723/A
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
	int x, y, z;
	cin >> x >> y >> z;
	cout << max (max (x, y), z) - min (min (x, y), z);
}
