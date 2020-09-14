//https://codeforces.com/problemset/problem/1208/A
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
		ll a, b, n;
		cin >> a >> b >> n;
		switch (n % 3)
		{
			case 0:
				cout << a << "\n";
				break;
			case 1:
				cout << b << "\n";
				break;
			case 2:
				cout << (b ^ a) << "\n";
		}
	}
}
