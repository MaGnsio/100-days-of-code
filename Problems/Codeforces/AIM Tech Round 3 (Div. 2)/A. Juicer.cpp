//https://codeforces.com/problemset/problem/709/A
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
	ll n, b, d, trash = 0, t = 0;
	cin >> n >> b >> d;
	ll arr[n];
	for (auto& elem : arr)
	{
		cin >> elem;
		if (elem <= b)
		{
			trash += elem;
		}
		if (trash > d)
		{
			t++;
			trash = 0;
		}
	}
	cout << t;
}
