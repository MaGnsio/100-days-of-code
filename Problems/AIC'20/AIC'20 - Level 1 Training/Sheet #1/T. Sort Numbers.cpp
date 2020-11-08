//https://codeforces.com/group/Rv2Qzg0DgK/contest/270964/problem/T
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
	int a[3], b[3];
	for (int i = 0; i < 3; ++i)
	{
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b + 3);
	for (auto& elem : b) cout << elem << "\n";
	cout << "\n";
	for (auto& elem : a) cout << elem << "\n";
}
