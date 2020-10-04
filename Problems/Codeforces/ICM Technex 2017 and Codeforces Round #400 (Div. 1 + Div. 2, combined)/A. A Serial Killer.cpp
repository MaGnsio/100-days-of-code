//https://codeforces.com/problemset/problem/776/A
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
	vector<pair<string,string>> v(10000);
	cin >> v[0].F >> v[0].S;
	cin >> n;
	for (int i = 1; i < n + 1; ++i)
	{
		cin >> v[i].F >> v[i].S;
	}
	for (int i = 0; i < n + 1; ++i)
	{
		cout << v[i].F << " " << v[i].S << "\n";
		if (v[i].F == v[i + 1].F) v[i + 1].F = v[i].S;
		else v[i + 1].F = v[i].F;
	}
}
