//https://codeforces.com/problemset/problem/266/B
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
	int n, t;
	cin >> n >> t;
	char q[n];
	for (auto& c : q)
	{
		cin >> c;
	}
	while (t)
	{
		for (int i = 0; i < n; ++i)
		{
			if (q[i] == 'B' && q[i + 1] == 'G')
			{
				swap (q[i], q[i + 1]);	
				i++;
			}
		}
		t--;
	}
	for (auto& c : q)
	{
		cout << c;
	}
}