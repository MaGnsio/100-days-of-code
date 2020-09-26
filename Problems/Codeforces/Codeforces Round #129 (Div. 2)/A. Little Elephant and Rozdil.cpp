//https://codeforces.com/problemset/problem/205/A
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
	ll n, x, mini = LLONG_MAX, ind, chk = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> x;
		if (x == mini)
			chk = 1;
		else if (x < mini)
		{
				mini = x;
				ind = i;
				chk = 0;
		}
	}
	if (chk == 1)
		cout << "Still Rozdil";
	else
		cout << ind;
}
