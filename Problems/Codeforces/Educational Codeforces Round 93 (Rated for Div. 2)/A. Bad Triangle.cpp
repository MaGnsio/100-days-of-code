//https://codeforces.com/contest/1398/problem/A
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
	ll n;
	cin >> n;
	while (n)
	{
		ll m;
		cin >> m;
		ll arr[m];
		for (int i = 0; i < m; ++i)
		{
			cin >> arr[i]; 
		}
		if (arr[0] + arr[1] <= arr[m - 1])
		{
			cout << 1 << " " << 2 << " " << m << "\n";
		}
		else
		{
			cout << -1 << "\n";
		}
		n--;
	}
}