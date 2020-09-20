//https://codeforces.com/problemset/problem/1110/A
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
	ll b, k, ans = 0, po = 1;
	cin >> b >> k;
	ll arr[k];
	for (auto& elem : arr)
	{
		cin >> elem;
	}
	for (int i = k - 1; i >= 0; --i)
	{
		ans += (arr[i] * po);
		po *= b;
	}
	if (ans % 2) cout << "odd";
	else cout << "even";
}
