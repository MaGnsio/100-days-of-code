//https://codeforces.com/contest/868/problem/A
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
	string p;
	cin >> p;
	int n;
	cin >> n;
	string w;
	while (n--)
	{
		string i;
		cin >> i;
		w += i;
	}
	int f = 0, s = 0;
	for (int i = 0; i < w.size (); ++i)
	{
		if (!(i % 2) && (w[i] == p[1]))
		{
			s++;
		}
		else if ((i % 2) && (w[i] == p[0]))
		{
			f++;
		}
		else if (w[i] == p[0] && w[i + 1] == p[1])
		{
			f++;
			s++;
		}
	}
	if (f && s)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
