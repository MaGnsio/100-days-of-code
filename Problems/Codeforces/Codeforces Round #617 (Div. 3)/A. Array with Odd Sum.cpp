//https://codeforces.com/problemset/problem/1296/A
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
		int n, o = 0, e = 0;
		cin >> n;
		int arr[n];
		for (auto& elem : arr)
		{
			cin >> elem;
			if (elem % 2) o++;
			else e++;
		}
		if ((o && e) || (o && (n % 2)))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
