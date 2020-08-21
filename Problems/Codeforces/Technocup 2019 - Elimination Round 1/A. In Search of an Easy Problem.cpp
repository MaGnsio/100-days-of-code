//https://codeforces.com/problemset/problem/1030/A
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
	int n;
	cin >> n;
	int arr[n];
	bool b = 0;
	for (auto& elem : arr)
	{
		cin >> elem;
		if (elem == 1)
		{
			b = 1;
		}
	}
	if (b)
	{
		cout << "HARD";
	}
	else
	{
		cout << "EASY";
	}
}
