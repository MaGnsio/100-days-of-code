//https://codeforces.com/problemset/problem/996/A
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
	unsigned int n, ctr = 0;
	cin >> n;
	while (n != 0)
	{
		if (n >= 100)
		{
			n -= 100;
			ctr++;
		}
		else if (n >= 20)
		{
			n -= 20;
			ctr++;
		}
		else if (n >= 10)
		{
			n -= 10;
			ctr++;
		}
		else if (n >= 5)
		{
			n -= 5;
			ctr++;
		}
		else
		{
			n--;
			ctr++;
		}
	}
	cout << ctr;
}
