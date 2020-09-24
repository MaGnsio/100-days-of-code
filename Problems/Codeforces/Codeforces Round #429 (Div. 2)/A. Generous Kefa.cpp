//https://codeforces.com/problemset/problem/841/A
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
	int n, k;
	cin >> n >> k;
	int arr[27] = {};
	for (int i = 0; i < n; ++i)
	{
		char c;
		cin >> c;
		arr[c - 'a']++;
	}
	for (int i = 0; i < 27; ++i)
	{
		if (arr[i] > k)
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}
