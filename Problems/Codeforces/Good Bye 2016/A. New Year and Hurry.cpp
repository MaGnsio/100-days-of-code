//https://codeforces.com/problemset/problem/750/A
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
	int l = (4 * 60) - k, i = 1, t = 0, s = 0;
	while (t + (i * 5) <= l && s < n)
	{
		t += (i * 5);
		i++;
		s++;
	}
	cout << s;
}
