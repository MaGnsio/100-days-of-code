//https://codeforces.com/problemset/problem/149/A
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
	int k, lg = 0, t = 0;
	cin >> k;
	int m[12];
	for (auto& t : m)
	{
		cin >> t;
	}
	sort (m, m + 12, greater<int> ());
	int i = 0;
	while (lg < k && i < 12)
	{
		lg += m[i];
		t++;
		i++;
	}
	if (lg >= k)
	{
		cout << t;
	}
	else
	{
		cout << -1;
	}
}
