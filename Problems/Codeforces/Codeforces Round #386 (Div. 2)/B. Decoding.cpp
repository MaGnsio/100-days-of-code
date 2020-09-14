//https://codeforces.com/problemset/problem/746/B
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
	string s;
	cin >> n >> s;
	string d = s;
	if (n % 2)
	{
		for (int i = n - 1, j = 0, k = i; i >= 0; --i)
		{
			if (i % 2)
			{
				d[j] = s[i];
				j++;
			}
			else
			{
				d[k] = s[i];
				k--;
			}
		}
	}
	else
	{
		for (int i = n - 1, j = 0, k = i; i >= 0; --i)
		{
			if (!(i % 2))
			{
				d[j] = s[i];
				j++;
			}
			else
			{
				d[k] = s[i];
				k--;
			}
		}
	}
	cout << d;
}
