//https://codeforces.com/problemset/problem/999/B
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
	int n;
	string s;
	cin >> n >> s;
	for (int i = 1; i <= n; ++i)
		if (!(n % i))
			reverse (s.begin (), s.begin () + i);
	cout << s;
}
