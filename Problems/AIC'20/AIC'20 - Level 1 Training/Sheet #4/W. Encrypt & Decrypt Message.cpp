//https://codeforces.com/group/Rv2Qzg0DgK/contest/273784/problem/W
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
	string s, k = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/", o = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	cin >> n >> s;
	if (n == 1)
	{
		for (int i = 0; i < s.size (); ++i)
		{
			cout << k[o.find (s[i])];
		}
	}
	else
	{
		for (int i = 0; i < s.size (); ++i)
		{
			cout << o[k.find (s[i])];
		}
	}
}
