//https://codeforces.com/contest/1420/problem/A
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
		int n;
		cin >> n;
		int arr[n];
		bool chk = false;
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
			if (i > 0 && arr[i] >= arr[i - 1])
				chk = true;
		}
		if (chk) cout << "YES\n";
		else cout << "NO\n";
	}
}
