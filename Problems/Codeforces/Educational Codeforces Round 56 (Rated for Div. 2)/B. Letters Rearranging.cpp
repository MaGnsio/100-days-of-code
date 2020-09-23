//https://codeforces.com/problemset/problem/1093/B
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
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		sort (s.begin (), s.end ());
		string r = s;
		reverse (r.begin (), r.end ());
		if (s != r)
			cout << s << "\n";
		else
			cout << -1 << "\n";
	}
}
