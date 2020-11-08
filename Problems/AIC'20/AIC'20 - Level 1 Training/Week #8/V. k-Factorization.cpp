//https://codeforces.com/group/Rv2Qzg0DgK/contest/286457/problem/V
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
	int n, k, ctr = 0;
	cin >> n >> k;
	vector<int> v;
	if (k == 1)
	{
		cout << n;
		return 0;
	}
	for (int i = 2; n > 1 && ctr < k; ++i)
	{
		while (n % i == 0)
		{
			v.push_back (i);
			n /= i;
			ctr++;
			if (ctr == k - 1 && n > 1)
			{
				v.push_back (n);
				ctr++;
				break;
			}
		}
	}
	if (ctr == k)
	{
		for (auto& elem : v) cout << elem << " ";
	}
	else cout << -1;
}
