//https://atcoder.jp/contests/abl/tasks/abl_b
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
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a <= d && c <= b) cout << "Yes";
	else cout << "No";
}
