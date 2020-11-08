//https://codeforces.com/contest/1427/problem/A
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

void solve ()
{
	ll n, sum = 0;
	cin >> n;
	ll a[n];
	for (auto& elem : a)
	{
		cin >> elem;
		sum += elem;
	}
	if (sum == 0)
	{
		cout << "NO\n";
		return;
	}
	else
	{
		cout << "YES\n";
		if (sum > 0)
		{	
			sort (a, a + n, greater<ll> ());
			for (auto& elem : a) cout << elem << " ";
		}
		else
		{
			sort (a, a + n);
			for (auto& elem : a) cout << elem << " ";
		}
		cout << "\n";
	}
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int t;
	cin >> t;
	while (t--) solve ();
}
