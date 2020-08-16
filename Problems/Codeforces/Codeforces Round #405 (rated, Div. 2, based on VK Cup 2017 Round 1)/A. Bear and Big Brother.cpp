//https://codeforces.com/problemset/problem/791/A
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
	int F, S, y = 0;
	cin >> F >> S;
	while (F <= S)
	{
		F = (3 * F);
		S = (2 * S);
		y++;
	}
	cout << y;
}