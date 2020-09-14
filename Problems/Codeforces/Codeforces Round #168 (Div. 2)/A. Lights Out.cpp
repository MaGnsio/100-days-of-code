//https://codeforces.com/problemset/problem/275/A
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
	int arr[3][3], ans[3][3] = {};
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			ans[i][j] += arr[i][j];
			ans[i][j] += (i + 1 > -1 && i + 1 < 3 ? arr[i + 1][j] : 0);
			ans[i][j] += (i - 1 > -1 && i - 1 < 3 ? arr[i - 1][j] : 0);
			ans[i][j] += (j + 1 > -1 && j + 1 < 3 ? arr[i][j + 1] : 0);
			ans[i][j] += (j - 1 > -1 && j - 1 < 3 ? arr[i][j - 1] : 0);
			if (ans[i][j] % 2) cout << 0;
			else cout << 1;
		}
		cout << "\n";
	}
}
