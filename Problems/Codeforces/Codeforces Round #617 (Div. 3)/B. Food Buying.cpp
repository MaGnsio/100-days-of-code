//https://codeforces.com/problemset/problem/1296/B
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
		int n;
		cin >> n;

		int r, b, s = 0;
		while (n >= 10)
		{
			b = n / 10;
			r = n % 10;
			s += (n - r);
			n = r + b;
		}
		s += n;
		cout << s << "\n";
	}
}
