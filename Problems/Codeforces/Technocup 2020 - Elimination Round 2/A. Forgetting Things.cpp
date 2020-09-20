//https://codeforces.com/problemset/problem/1225/A
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
	ll da, db;
	cin >> da >> db;
	if (da == db)
	{
		cout << da * 10 << " " << (da * 10) + 1 ;
	}
	else if (da + 1 == db)
	{
		cout << da << " " << db;
	}
	else if (da == 9 && db == 1)
	{
		cout << 9 << " " << 10;
	}
	else
	{
		cout << -1;
	}
}
