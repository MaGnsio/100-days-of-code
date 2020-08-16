//https://codeforces.com/problemset/problem/116/A
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
	int n, a, b, in = 0, max = 0;
	cin >> n;
	while (n)
	{
		cin >> a >> b;
		in -= a;
		in += b;
		if (in > max)
		{
			max = in;
		}
		n--;
	}
	cout << max;
}