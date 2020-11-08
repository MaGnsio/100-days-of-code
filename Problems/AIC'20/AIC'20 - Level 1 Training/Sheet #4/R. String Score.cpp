//https://codeforces.com/group/Rv2Qzg0DgK/contest/273784/problem/R
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
	ll n, sum = 0;
	string s;
	cin >> n >> s;
	for (ll i = 0; i < s.size (); ++i)
	{
		if (s[i] == 'V') sum += 5;
		else if (s[i] == 'W') sum += 2;
		else if (s[i] == 'X') i++;
		else if (s[i] == 'Y')
		{
			s += s[i+1];
			i++;
		}	
		else if (s[i] == 'Z')
		{
			if (s[i+1] == 'V')
			{
				sum /= 5;
				i++;
			}
			else if (s[i+1] == 'W')
			{
				sum /= 2;
				i++;
			}
		}
	}
	cout << sum;
}
