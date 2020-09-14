//https://codeforces.com/problemset/problem/1144/B
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
	int n, odd = 0, even = 0;
	cin >> n;
	vector<int> vo, ve;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		if (x % 2)
		{
			vo.push_back (x);
			odd++;
		}
		else
		{
			ve.push_back (x);
			even++;
		}
	}
	if (abs (odd - even) <= 1)
	{
		cout << 0;
	}
	else if (odd > even)
	{
		int ans = 0;
		sort (vo.begin (), vo.end ());
		for (int i = 0; i < odd - even - 1; ++i)
		{
			ans += vo[i];
		}
		cout << ans;
	}
	else
	{
		int ans = 0;
		sort (ve.begin (), ve.end ());
		for (int i = 0; i < even - odd - 1; ++i)
		{
			ans += ve[i];
		}
		cout << ans;
	}
}
