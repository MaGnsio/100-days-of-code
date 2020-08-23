//https://codeforces.com/problemset/problem/268/A
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
	int n, ctr = 0;
	cin >> n;
	int arr[2 * n];
	for (auto& elem : arr)
	{
		cin >> elem;
	}
	for (int i = 0; i < 2 * n; i += 2)
	{
		for (int j = 1; j < 2 * n; j +=2)
		{
			if (arr[i] == arr[j])
			{
				ctr++;
			}
		}
	}
	cout << ctr;
}
