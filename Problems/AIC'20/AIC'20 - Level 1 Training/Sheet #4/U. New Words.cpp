//https://codeforces.com/group/Rv2Qzg0DgK/contest/273784/problem/U
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
	int a[5] = {};
	for (int i = 0; i < s.size (); ++i)
	{
		if (s[i] == 'e' || s[i] == 'E') a[0]++;
		if (s[i] == 'g' || s[i] == 'G') a[1]++;
		if (s[i] == 'y' || s[i] == 'Y') a[2]++;
		if (s[i] == 'p' || s[i] == 'P') a[3]++;
		if (s[i] == 't' || s[i] == 'T') a[4]++;
	}
	cout << *min_element (a, a + 5);
}
