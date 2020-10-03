//https://codeforces.com/problemset/problem/892/A
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
	ll n, sum = 0;
	cin >> n;
	ll a[n], b[n];
	for (auto& elem : a)
	{
		cin >> elem;
		sum += elem;
	}
	for (auto& elem : b) cin >> elem;
	sort (b, b + n, greater<int> ());
	if (b[0] + b[1] < sum) cout << "NO";
	else cout << "YES";
}
