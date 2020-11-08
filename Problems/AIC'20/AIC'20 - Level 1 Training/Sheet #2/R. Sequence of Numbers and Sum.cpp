//https://codeforces.com/group/Rv2Qzg0DgK/contest/271445/problem/R
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
	while (cin >> a >> b)
	{
		if (a <= 0 || b <= 0) return 0;
		int sum = 0;
		for (int i = min (a, b); i <= max (a, b); ++i)
		{
			cout << i << " ";
			sum += i;
		}
		cout << "sum =" << sum << "\n";
	}
}
