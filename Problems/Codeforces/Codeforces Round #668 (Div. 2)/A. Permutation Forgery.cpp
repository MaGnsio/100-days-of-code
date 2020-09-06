//https://codeforces.com/contest/1405/problem/A
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
		for (auto& elem : arr)
		{
			cin >> elem;
		}
		reverse (arr, arr + n);
		for (auto& elem : arr)
		{
			cout << elem << " ";
		}
		cout << "\n";
	}

}
