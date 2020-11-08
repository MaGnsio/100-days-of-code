//https://codeforces.com/group/Rv2Qzg0DgK/contest/285699/problem/I
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
	int m;
	string s;
	cin >> s >> m;
	vector<int> v(s.size () + 1);
	for (int i = 0; i < s.size (); ++i)
	{
		v[i + 1] = v[i] + (s[i] == s[i + 1]);
	}
	while (m--)
	{
		int l, r;
		cin >> l >> r;
		cout << v[r - 1] - v[l - 1] << "\n";
	}	
}
