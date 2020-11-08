//https://codeforces.com/group/Rv2Qzg0DgK/contest/276233/problem/C
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

bool is_odd (int n)
{
	if (n % 2) return true;
	else return false;
}
bool is_bp (int n)
{
	int cur = n, rev = 0;
	while (cur > 0)
	{
		rev <<= 1;
		if (cur & 1 == 1) rev ^= 1;
		cur >>= 1;
	}
	if (rev == n) return true;
	else return false;
}
int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int n;
	cin >> n;
	if (is_odd (n) && is_bp (n)) cout << "YES";
	else cout << "NO";
}
