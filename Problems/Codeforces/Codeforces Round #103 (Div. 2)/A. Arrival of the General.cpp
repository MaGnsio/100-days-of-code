//https://codeforces.com/problemset/problem/144/A
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
	int n, max = 0, min = 101, maxi = 0, mini = 0;
	cin >> n;
	int sol[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> sol[i];
		if (sol[i] > max)
		{
			max = sol[i];
			maxi = i; 
		}
		if (sol[i] <= min)
		{
			min = sol[i];
			mini = i;
		}
	}
	if (maxi < mini)
	{
		cout << maxi + (n - mini - 1);
	}
	else
	{
		cout << maxi + (n - mini - 1) - 1;
	}
	//the formulas is not compressed due to the sake of understanding
}
