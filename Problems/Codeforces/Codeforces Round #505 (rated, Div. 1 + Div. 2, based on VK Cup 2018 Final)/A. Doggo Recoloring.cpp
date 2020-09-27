//https://codeforces.com/problemset/problem/1025/A
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
	cin >> n;
	if (n == 1)
	{
		cout << "YES";
		return 0;
	}
	char col[n];
	int arr[26] = {};
	for (auto& elem : col)
	{
		cin >> elem;
		arr[elem - 'a']++;
	}
	for (int i = 0; i < 26; ++i)
	{
		if (arr[i] > 1)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}
