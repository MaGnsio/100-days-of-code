//https://codeforces.com/problemset/problem/1295/A
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
		ll n, ans = 0;
		cin >> n;
		while (n)
		{
			if (n % 2 == 0)
			{
				cout << 1;
				n -= 2;
			}
			else
			{
				cout << 7;
				n -= 3;
			}
		}
		cout << "\n";
	}
}
