//https://codeforces.com/problemset/problem/200/B
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
	int n;
	cin >> n;
	double arr[n], tot = 0;
	for (auto& elem : arr)
	{
		cin >> elem;
		tot += elem;
	}
	cout << setprecision (12) << tot / n;
}
