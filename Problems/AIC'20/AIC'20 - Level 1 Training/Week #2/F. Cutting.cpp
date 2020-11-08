//https://codeforces.com/group/Rv2Qzg0DgK/contest/271444/problem/F
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
	int n, b;
	cin >> n >> b;
	vector<int> v;
	int even = 0, odd = 0;
	vector<int> cost;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		v.push_back (x);
		if (even == odd && i!=0)
		{
			cost.push_back (abs(v[i] - v[i - 1]));
		}
		if (v[i] % 2 == 0) even++;
		else odd++;
	}
	sort(cost.begin (), cost.end ());
	int ans = 0;
	for (int i = 0; i < cost.size (); ++i)
	{
		if (b >= cost[i])
		{
			ans++;
			b -= cost[i];
		}
		else break;
	}
	cout << ans;
}
