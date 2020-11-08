//https://codeforces.com/group/Rv2Qzg0DgK/contest/272491/problem/G
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
	ll a[n];
	for (auto& elem : a) cin >> elem;
	for (int i = 0; i < (n / 2); ++i)
	{
		if (a[i] != a[n - i - 1])
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}
