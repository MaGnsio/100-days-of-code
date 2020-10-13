//https://atcoder.jp/contests/arc104/tasks/arc104_a
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
	int a, b;
	cin >> a >> b;
	int x = (a + b) / 2, y = a - x;
	cout << x << " " << y;
}
