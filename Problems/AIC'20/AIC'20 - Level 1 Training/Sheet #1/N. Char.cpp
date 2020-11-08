//https://codeforces.com/group/Rv2Qzg0DgK/contest/270964/problem/N
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
	char x;
	cin >> x;
	cout << (x >= 'a' && x <= 'z' ? char (x - 32) : char (x + 32));
}
