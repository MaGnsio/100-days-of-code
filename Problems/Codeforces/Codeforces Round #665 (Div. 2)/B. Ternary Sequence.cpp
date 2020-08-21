//https://codeforces.com/contest/1401/problem/B
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

void solve ()
{
	int m, x0, x1, x2, y0, y1, y2;
	cin >> x0 >> x1 >> x2;
	cin >> y0 >> y1 >> y2;
	//picking (0,2)=0 pairs as much as possible and give the remaining 0's or 2's
	m = min (x0, y2);
	x0 -= m;
	y2 -= m;
	//picking (1,0)=0 pairs as much as possible and give the remaining 1's and 0's
	m = min (x1, y0);
	x1 -= m;
	y0 -= m;
	//picking (2,1)=2 pairs as much as possible and give the remaing 2's and 1's
	m = min (x2, y1);
	x2 -= m;
	y1 -= m;
	//now the answer is 2 of (2, 1)=2 pairs minus 2 of (1,2)=-2 pairs
	cout << 2 * (m - min (x1, y2)) << "\n";
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	ll t;
	cin >> t;
	while (t--)
	{
		solve ();
	}
}
