//https://codeforces.com/problemset/problem/550/A
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
	int ind = 1;
	bool ab = false, ba = false;
	string s;
	cin >> s;
	for(int i = 1; i < s.size (); ++i)
	{
		if(s[i - 1] == 'A' && s[i] == 'B')
		{
			ab = true;
			ind = i;
			break;
		}	
	}
	for(int i = ind + 2; i < s.size (); ++i)
	{
		if(s[i - 1] == 'B' && s[i] == 'A')
		{
			ba = true;
			break;
		}	
	}
	if(!ba || !ab)
	{
		ab = false, ba = false;
		int ind1 = 1;
		for(int i = 1; i < s.size (); ++i)
		{
			if(s[i-1]=='B' && s[i]=='A')
			{
				ba = true;
				ind1 = i;
				break;
			}	
		}
		for(int i = ind1 + 2; i < s.size (); ++i)
		{
			if(s[i - 1] == 'A' && s[i] == 'B')
			{
				ab = true;
				break;
			}	
		}
	}
	if(ab && ba) cout << "YES";
	else cout << "NO";
}
