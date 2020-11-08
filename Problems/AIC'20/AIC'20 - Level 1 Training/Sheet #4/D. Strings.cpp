//https://codeforces.com/group/Rv2Qzg0DgK/contest/273784/problem/D
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
	string a, b;
	cin >> a >> b;
	cout << a.size () << " " << b.size () << "\n" << a + b << "\n";
	swap (a[0], b[0]);
	cout << a << " " << b << "\n";
}
