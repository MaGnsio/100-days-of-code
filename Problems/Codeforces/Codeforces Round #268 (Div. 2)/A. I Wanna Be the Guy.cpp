//https://codeforces.com/problemset/problem/469/A
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
	int n, x, t = 2, arr[100] = {};
	cin >> n;
	while (t--)
	{
		cin >> x;
		for (int i = 0; i < x; i++)
		{
			int l;
			cin >> l;
			arr[l]++;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (!arr[i])
		{
			cout << "Oh, my keyboard!";
			return 0;
		}
	}
	cout << "I become the guy.";
}
