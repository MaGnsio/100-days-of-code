//https://codeforces.com/contest/1419/problem/C
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
		int n, x, a = 0, b = 0, sum = 0;
		cin >> n >> x;
		for (int i = 0; i < n; ++i)
		{
			int c;
			cin >> c;
			if (c != x) a = 1;
			if (c == x) b = 1;
			sum += c;
		}
		if (a == 0)
		{
			cout << 0 << "\n";
		}
		else if (b == 1 || sum == (n * x))
			cout << 1 << "\n";
		else
			cout << 2 << "\n";
	}
}
