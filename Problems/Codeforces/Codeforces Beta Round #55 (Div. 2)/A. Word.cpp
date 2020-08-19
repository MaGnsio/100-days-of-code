//https://codeforces.com/problemset/problem/59/A
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
	int uc = 0;
	string w;
	cin >> w;
	for (int i = 0; i < w.length (); ++i)
	{
		if (w[i] < 91)
		{
			uc++;
		}
	}
	if (uc > w.length () - uc)
	{
		for (int i = 0; i < w.length (); ++i)
		{
			if (w[i] > 91)
			{
				w[i] -= 32;
			}
		}
	}
	else
	{
		for (int i = 0; i < w.length (); ++i)
		{
			if (w[i] < 91)
			{
				w[i] += 32;
			}
		}
	}
	cout << w;
}