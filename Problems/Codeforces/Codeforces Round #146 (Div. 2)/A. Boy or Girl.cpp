//https://codeforces.com/problemset/problem/236/A
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
	string name;
	int ctr = 1;
	cin >> name;
	for (int i = 1; i < name.length (); ++i)
	{
		int x = 0;
		for (int j = 0; j < i; ++j)
		{
			if (name[i] == name[j])
			{
				x++; 
			}
		}
		if (x == 0)
		{
			ctr++;
		}
	}
	if (ctr % 2 != 0)
	{
		cout << "IGNORE HIM!";
	}
	else
	{
		cout << "CHAT WITH HER!";
	}
}