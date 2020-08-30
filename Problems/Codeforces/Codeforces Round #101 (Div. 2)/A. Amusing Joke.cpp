//https://codeforces.com/problemset/problem/141/A
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
	int ctr = 0;
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	string s4 = s1 + s2;
	sort (s3.begin (), s3.end ());
	sort (s4.begin (), s4.end ());
	if (s4 == s3)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
