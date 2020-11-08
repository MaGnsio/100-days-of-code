//https://codeforces.com/group/Rv2Qzg0DgK/contest/271445/problem/J
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

bool isprime (int x)
{
	for (int i = 2; i < x; ++i)
		if (!(x % i)) return false;
	return true;
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int n;
	cin >> n;
	for (int i = 2; i <= n; ++i)
		if (isprime (i)) cout << i << " ";
}
