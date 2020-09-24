//https://codeforces.com/problemset/problem/6/A
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
	int chk = 0;
	int arr[4];
	for (auto& elem : arr) cin >> elem;
	sort (arr, arr + 4, greater<int> ());
	for (int i = 0; i < 2; ++i)
	{
		if (arr[i + 1] + arr[i + 2] > arr[i])
		{
			chk = 1;
			break;
		}
		if (arr[i + 1] + arr[i + 2] == arr[i])
			chk = 2;
	}
	if (chk == 1) cout << "TRIANGLE";
	else if (chk == 2) cout << "SEGMENT";
	else cout << "IMPOSSIBLE";
}
