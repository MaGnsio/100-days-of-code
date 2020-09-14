//https://codeforces.com/problemset/problem/670/A
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
	int mi = (n % 7 == 6 ? (2 * (n / 7)) + 1 : (2 * (n / 7)));
	int ma = (2 * (n / 7)) + (n % 7 > 2 ? 2 : n % 7);
	cout << mi << " " << ma;
}
