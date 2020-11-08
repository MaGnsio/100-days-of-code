//https://codeforces.com/contest/52/problem/A
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
	int a[n], b[3] = {};
	for (auto& elem : a)
	{
		cin >> elem;
		b[elem - 1]++;
	}
	sort (b, b + 3);
	cout << b[0] + b[1];
}
