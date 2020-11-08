//https://codeforces.com/group/Rv2Qzg0DgK/contest/276233/problem/H
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

void print (char c, int n)
{
	if (n > 1) print (c, n - 1);
	cout << c << " ";
}

int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		char c;
		cin >> n >> c;
		print (c, n);
		cout << "\n";
	}
}
