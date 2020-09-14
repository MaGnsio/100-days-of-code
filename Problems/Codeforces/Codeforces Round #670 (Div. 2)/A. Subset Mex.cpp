//https://codeforces.com/contest/1406/problem/A
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
		int n, ma = 0, mexa, mexb;
		cin >> n;
		int arr[102] = {};
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			arr[x]++;
			ma = max (ma, x);
		}
		for (int i = 0; i < ma + 2; ++i)
		{
			if (arr[i] == 0)
			{
				mexa = i;
				break;
			}
		}
		for (int i = 0; i < ma + 2; ++i)
		{
			if (arr[i] <= 1)
			{
				mexb = i;
				break;
			}
		}
		cout << mexa + mexb << "\n";
	}
}
