//https://codeforces.com/problemset/problem/977/A
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
	ll num, n;
	cin >> num >> n;
	while (n)
	{
		if ((num >= 10) && (num % 10 == 0))
		{
			num /= 10;
		}
		else
		{
			num--;
		}
		n--;
	}
	cout << num;
}