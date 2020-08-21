//https://codeforces.com/problemset/problem/271/A
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

bool isdy (int x)
{
	int o, t, h, s;
	o = x % 10;
	t = (x / 10) % 10;
	h = (x / 100) % 10;
	s = (x / 1000) % 10;
	if ((o ^ t) && (t ^ h) && (h ^ s) && (s ^ o) && (o ^ h) && (s ^ t))
	{
		return true;
	}
	else
	{
		return false;
	}

}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int y;
	cin >> y;
	bool b = 1;
	while (b)
	{
		y++;
		if (isdy (y))
		{
			b = 0;
		}
	}
	cout << y;
}
