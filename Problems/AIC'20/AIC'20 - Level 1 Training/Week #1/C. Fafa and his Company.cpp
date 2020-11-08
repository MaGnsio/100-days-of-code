//https://codeforces.com/group/Rv2Qzg0DgK/contest/270965/problem/C
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
	cin >> n;
	for (int i = 1; i <= (n / 2); ++i)
	{
		if ((n - i) % i == 0) ans++;
	}
	cout << ans;
}
