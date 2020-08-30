//https://codeforces.com/problemset/problem/472/A
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
	if (n % 2 == 0)
	{
		cout << 6 << " " << n - 6;
	}
	else
	{
		cout << 9 << " " << n - 9;
	}
}
