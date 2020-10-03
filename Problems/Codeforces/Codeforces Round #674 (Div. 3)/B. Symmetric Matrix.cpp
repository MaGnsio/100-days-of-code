//https://codeforces.com/contest/1426/problem/B
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
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int arr[4 * n];
		for (auto& elem : arr) cin >> elem;
		if (m % 2 == 0)
		{
			int ctr = 0;
			for (int i = 0; i < ((4 * n) - 3); i += 4)
				if (arr[i + 1] == arr[i + 2]) ctr++;
			if (ctr) cout << "YES\n";
			else cout << "NO\n";
		}
		else cout << "NO\n";
	}
}
