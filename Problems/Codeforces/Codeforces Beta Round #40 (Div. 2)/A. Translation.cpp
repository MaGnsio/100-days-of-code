//https://codeforces.com/problemset/problem/41/A
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
	int c = 0;
	string e, i;
	cin >> e >> i;
	for (int j = 0; j < e.length (); ++j)
	{
		if (e[j] != i[e.length () - 1 - j])
		{
			c++;
		}
	}
	if (c != 0)
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}
}