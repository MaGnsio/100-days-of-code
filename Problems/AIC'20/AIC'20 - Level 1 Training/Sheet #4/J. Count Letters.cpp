//https://codeforces.com/group/Rv2Qzg0DgK/contest/273784/problem/J
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
	int a[26] = {};
	string s;
	cin >> s;
	for (auto& c : s) a[c - 'a']++;
	for (int i = 0; i < 26; ++i)
	{
		if (a[i]) cout << char ('a' + i) << " : " << a[i] << "\n";
	}
}
