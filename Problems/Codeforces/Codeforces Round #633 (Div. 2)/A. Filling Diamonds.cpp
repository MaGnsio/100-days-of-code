//https://codeforces.com/problemset/problem/1339/A
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
		int n;
		cin >> n;
		cout << n << "\n";
	}
}
/*The key observation of this problem is, wherever you put vertical diamond at some point,
* all other places are uniquely placed by horizontal diamonds like picture below.
* There are n places you can put vertical diamond, so answer is n for each test case. */
