//https://codeforces.com/problemset/problem/427/A
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
	int n, c = 0, s = 0;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		if (arr[i] == -1 && s)
		{
			s--;
		}
		else if (arr[i] == -1)
		{
			c++;
		}
		else
		{
			s += arr[i];
		}
	}
	cout << c;
}
