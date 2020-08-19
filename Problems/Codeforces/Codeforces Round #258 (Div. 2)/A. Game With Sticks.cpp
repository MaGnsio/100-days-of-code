//https://codeforces.com/problemset/problem/451/A
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
	int m, n;
	cin >> m >> n;
	bool t = 0; 		//0 for Akshat's turn, 1 for Malvika's turn
	while (m && n)
	{
		m--; n--;
		t = !t;
	}
	if (t)
	{
		cout << "Akshat";
	}
	else
	{
		cout << "Malvika";
	}
}
