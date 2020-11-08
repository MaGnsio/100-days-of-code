//https://codeforces.com/group/Rv2Qzg0DgK/contest/286457/problem/F
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;
 
bool isprime (int i)
{
	if (i < 2) return false;
	for (int j = 2; j < i; ++j)
	{
		if (!(i % j)) return false;
	}
	return true;
}
bool isalpri (int i)
{
	int k = i, ctr = 0;
	if (isprime (i)) return false;
	for (int j = 2; j <= i; ++j)
	{
		if (isprime (j) && !(k % j))
		{
			k /= j;
			ctr++;
		}
		if (ctr > 2) return false;
	}
	if (ctr == 2) return true;
	else return false;
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int n, ans = 0;
	cin >> n;
	for (int i = 6; i <= n; ++i)
	{
		if (isalpri (i))
			ans++;
	}
	cout << ans;
}
