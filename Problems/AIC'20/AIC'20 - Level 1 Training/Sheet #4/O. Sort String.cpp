//https://codeforces.com/group/Rv2Qzg0DgK/contest/273784/problem/O
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
	char c;
	cin >> n;
	int a[26] = {};
	for (int i = 0; i < n; ++i)
	{
		cin >> c;
		a[c - 'a']++;
	}
	for (int i = 0; i < 26; ++i)
	{
		for (int j = 0; j < a[i]; ++j) cout << char ('a' + i);
	}
}
