//https://codeforces.com/problemset/problem/903/A
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
cp:
	while (t--)
	{
		int n;
		cin >> n;
		for (int i = 0; i < 34; ++i)
		{
			for (int j = 0; j < 15; ++j)
			{
				if ((i * 3) + (j * 7) == n)
				{
					cout << "YES\n";
					goto cp;
				}
			}
		}
		cout << "NO\n";
	}
}
