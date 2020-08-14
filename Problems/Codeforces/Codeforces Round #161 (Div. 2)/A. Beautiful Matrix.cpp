//https://codeforces.com/problemset/problem/263/A
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); 
	int arr[5][5], m = 0;
	for (auto& rows : arr)
	{
		for (auto& elem : rows)
		{
			cin >> elem;
		}
	}
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (arr [i][j] == 1)
			{
				m += (abs (2 - i) + abs (2 - j));
			}

		}
	}
	cout << m;
}