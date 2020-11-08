//https://codeforces.com/group/Rv2Qzg0DgK/contest/271444/problem/E
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
	int r1, r2, c1, c2, d1, d2;
	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
	int y = (d2 - c1 + r1) / 2;
	int x = r1 - y, z = d2 - y, l = c2 - y;
	if (x!=y && x!=z && x!=l && y!=z && y!=l && z!=l
	    && x>0 && x<10
	    && y>0 && y<10 
	    && z>0 && z<10
	    && l>0 && l<10
	    && z + l == r2
	    && y + l == c2
	    && y + z == d2)
	{
		cout << x << " " << y << "\n" << z << " " << l;
	}
	else cout << -1;
}
