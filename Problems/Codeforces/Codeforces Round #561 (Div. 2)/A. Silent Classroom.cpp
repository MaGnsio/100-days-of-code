//https://codeforces.com/problemset/problem/1166/A
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
	int n, sum = 0;
	cin >> n;
	int arr[26] = {};
	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;
		arr[s[0] - 'a']++;
	}
	for (int i = 0; i < 26; ++i)
	{
		int a = arr[i] / 2;
		int b = arr[i] - (arr[i] / 2);
		int c1 = (a == 1 ? 0 : a * (a - 1) / 2);
		int c2 = (b == 1 ? 0 : b * (b - 1) / 2);
		sum += (c1 + c2);
	}
	cout << sum;
}
