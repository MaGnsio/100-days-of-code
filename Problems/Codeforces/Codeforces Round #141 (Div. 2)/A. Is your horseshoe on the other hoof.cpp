//https://codeforces.com/problemset/problem/228/A
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
	ll s1, s2, s3, s4, ans = 0;
	cin >> s1 >> s2 >> s3 >> s4;
	if (s1 == s2 || s1 == s3 || s1 == s4)
	{
		ans++;
	}
	if (s2 == s3 || s2 == s4)
	{
		ans++;
	}
	if (s3 == s4)
	{
		ans++;
	}
	cout << ans;
}
