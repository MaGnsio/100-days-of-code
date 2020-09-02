//https://codeforces.com/problemset/problem/519/A
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
	int w = 0, b = 0;
	for (int i = 0; i < 64; ++i)
	{
		char p;
		cin >> p;
		if (p == 'Q') w += 9;
		else if (p == 'R') w += 5;
		else if (p == 'B' || p == 'N') w += 3;
		else if (p == 'P') w++;
		if (p == 'q') b += 9;
		else if (p == 'r') b += 5;
		else if (p == 'b' || p == 'n') b += 3;
		else if (p == 'p') b++;
	}
	if (w > b) cout << "White";
	else if (b > w) cout << "Black";
	else cout << "Draw";
}
