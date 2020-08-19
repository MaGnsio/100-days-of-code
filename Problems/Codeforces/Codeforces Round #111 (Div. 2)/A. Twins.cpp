//https://codeforces.com/problemset/problem/160/A
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
	int n, sum = 0, min = 0, ctr = 0;
	cin >> n;
	int c[n];
	for (auto& elem : c)
	{
		cin >> elem;
		sum += elem;
	}
	sort (c, c + n);
	for (int i = n; i > 0; --i)
	{
		min += c[i - 1];
		ctr++;
		if (min > (sum - min))
		{
			break;
		}
	}
	cout << ctr;
}
