//https://codeforces.com/problemset/problem/734/A
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
	int n, A = 0, D = 0;
	cin >> n;
	string g;
	cin >> g;
	for (int i = 0; i < n; ++i)
	{
		if (g[i] == 'A')
		{
			A++;
		}
		else
		{
			D++;
		}
	}
	if (A > D)
	{
		cout << "Anton";
	}
	else if (D > A)
	{
		cout << "Danik";
	}
	else
	{
		cout << "Friendship";
	}
}