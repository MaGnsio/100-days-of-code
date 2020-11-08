//https://codeforces.com/group/Rv2Qzg0DgK/contest/270964/problem/Q
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
	double x, y;
	cin >> x >> y;
	if (x == 0 && y == 0) cout << "Origem";
	if (x != 0 && y == 0) cout << "Eixo X";
	if (x == 0 && y != 0) cout << "Eixo Y";
	if (x > 0 && y > 0) cout << "Q1";
	if (x < 0 && y > 0) cout << "Q2";
	if (x < 0 && y < 0) cout << "Q3";
	if (x > 0 && y < 0) cout << "Q4";
}
