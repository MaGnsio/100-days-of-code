//https://codeforces.com/problemset/problem/1154/A
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
	int arr[4];
	for (auto& elem : arr) cin >> elem;
	sort (arr, arr + 4, greater<int> ());
	int a = arr[0] - arr[3];
	int b = arr[0] - arr[2];
	int c = arr[0] - arr[1];
	cout << a << " " << b << " " << c;
}
