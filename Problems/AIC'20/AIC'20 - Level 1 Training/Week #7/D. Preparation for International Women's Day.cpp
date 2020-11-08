//https://codeforces.com/group/Rv2Qzg0DgK/contest/285699/problem/D
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
	int n, k;
	cin >> n >> k;
	vector<int> v(k);
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		v[x % k]++;
	}
	int ans = (v[0] / 2) + (k % 2 ? 0 : v[k / 2] / 2);
	for (int i = 1; i < (k + 1) / 2; ++i)
	{
		int j = k - i;
		ans += min (v[i], v[j]);
	}
	cout << 2 * ans;
}
