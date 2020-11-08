//https://codeforces.com/group/Rv2Qzg0DgK/contest/286457/problem/G
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
	int x, sum = 0;
	for (int i = 0; i < 5; ++i)
	{
		cin >> x;
		sum += x;
	}
	if (sum % 5 == 0 && sum) cout << sum / 5;
	else cout << -1;
}
