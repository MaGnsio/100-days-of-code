//https://codeforces.com/problemset/problem/443/A
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
	string s;
	getline (cin, s);
	int arr[26] = {}, ctr = 0;
	for (int i = 1; i < s.size() - 1; i += 3)
	{
		arr[s[i] - 97]++;
	}
	for (int i = 0; i < 26; ++i)
	{
		if (arr[i])
		{
			ctr++;
		}
	}
	cout << ctr;
}
