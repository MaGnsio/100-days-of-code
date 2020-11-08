//https://codeforces.com/group/Rv2Qzg0DgK/contest/273784/problem/X
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
	string s;
	cin >> s;
	string ans = s;
	for (int i = 0; i < s.size () - 1; ++i)
	{
		string str1 = s.substr (0, i + 1), str2 = s.substr (i + 1, s.size () - (i + 1));
		sort (str1.begin (), str1.end ());
		sort (str2.begin (), str2.end ());
		if (ans.compare (str1 + str2) == 1) ans = str1 + str2;
	}
	cout << ans;
}
