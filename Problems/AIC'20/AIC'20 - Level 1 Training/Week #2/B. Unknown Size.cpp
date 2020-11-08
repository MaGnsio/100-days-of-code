//https://codeforces.com/group/Rv2Qzg0DgK/contest/271444/problem/B
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
	int n, ans = 0;
	vector<int> v;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		if (!(n % i))
		{
			v.push_back (i);
			ans++;
		}
	}
	cout << ans << "\n";
	for (auto& elem : v) cout << elem << " ";
}
