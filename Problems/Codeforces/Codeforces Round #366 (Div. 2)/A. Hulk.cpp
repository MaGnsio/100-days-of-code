//https://codeforces.com/problemset/problem/705/A
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
	int n;
	cin >> n;
	string h = "I hate";
	string l = "I love";
	string c = " that ";
	string e = " it";
	for (int i = 1; i <= n; ++i)
	{
		if (i % 2 != 0)
		{
			cout << h;
		}
		else
		{
			cout << l;
		}
 		if ( i != n)
		{
			cout << c;
		}
		else
		{
			cout << e;
		}
	}

}
