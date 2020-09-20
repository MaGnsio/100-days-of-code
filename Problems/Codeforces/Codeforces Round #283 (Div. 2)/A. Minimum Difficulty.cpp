//https://codeforces.com/problemset/problem/496/A
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
	int n, x = INT_MAX, del = 0;
	cin >> n;
	vector<int> v(n);
	for (auto& elem : v)
	{
		cin >> elem;
	}
	for (int i = 0; i < n - 2; ++i)
	{
		if (v[i + 2] - v[i] < x)  
		{
			x = v[i + 2] - v[i];
			del = i + 1;
		}
	}
	v.erase (v.begin () + del);
	for (int i = 0; i < n - 2; ++i)
	{
		if (v[i + 1] - v[i] > x)
		{
			x = v[i + 1] - v[i];
		}
	}
	cout << x;
}
