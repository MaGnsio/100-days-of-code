//https://codeforces.com/problemset/problem/580/A
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
	int n, count = 1, max = 1;
	cin >> n;
	int s[n];
	for (auto& elem : s)
	{
		cin >> elem;
	}
	for (int i = 1; i < n; ++i)
	{
		if (s[i] >= s[i - 1])
		{
			count++;
		}
		else
		{
			count = 1;
		}
		if (count > max)
		{
			max = count;
		}
	}
	cout << max;
}
