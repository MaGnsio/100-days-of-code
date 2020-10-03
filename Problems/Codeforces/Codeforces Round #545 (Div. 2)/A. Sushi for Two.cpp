//https://codeforces.com/problemset/problem/1138/A
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
	int n, cur = 1, ans = 0;
	cin >> n;
	vector<int> v1(n), v2;
	for (auto& elem : v1) cin >> elem;
	for (int i = 0; i < n - 1; ++i)
	{
		if (v1[i] == v1[i + 1]) cur++;
		else
		{
			v2.push_back (cur);
			cur = 1;
		}
	}
	v2.push_back (cur);
	for (int i = 0; i < v2.size () - 1; ++i)
	{
		ans = max (ans, 2 * min (v2[i], v2[i + 1]));
	}
	cout << ans;
}
