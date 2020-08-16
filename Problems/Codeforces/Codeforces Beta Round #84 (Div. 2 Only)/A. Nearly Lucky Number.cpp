//https://codeforces.com/problemset/problem/110/A
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
	ll n, ctr = 0;
	cin >> n;
	while (n)
	{
		if (n % 10 == 4 || n % 10 == 7)
		{
			ctr ++;
		}
		n /= 10;
	}
	if (ctr == 4 || ctr == 7)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}