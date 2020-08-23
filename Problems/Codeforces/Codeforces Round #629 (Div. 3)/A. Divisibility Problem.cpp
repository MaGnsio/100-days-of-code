//https://codeforces.com/problemset/problem/1328/A
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
		ll a, b;
		cin >> a >> b;
		if (a % b == 0)
		{
		   cout << 0 << "\n";
		}
		else
		{
		   cout << b * ((a / b) + 1) - a << "\n"; //(b times the number before b that is divisble by a + 1) == the next number after a that is divisble by b
		}
	}
}
