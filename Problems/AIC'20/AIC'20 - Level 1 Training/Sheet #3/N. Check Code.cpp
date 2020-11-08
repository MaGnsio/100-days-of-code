//https://codeforces.com/group/Rv2Qzg0DgK/contest/272491/problem/N
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
	int a, b;
	string s;
	cin >> a >> b >> s;
	for (int i = 0; i < s.size (); ++i)
	{
		if (!((i == a && s[i] == '-') || (i != a && s[i] >= '0' && s[i] <= '9')))
		{
			cout << "No\n";
			return 0;
		}
	}
	cout << "Yes\n";
}
