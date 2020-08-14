//https://codeforces.com/problemset/problem/339/A
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0);
	string sum;
	cin >> sum;
	for(int i = 2; i < sum.size (); i += 2)
	{
		for(int j = 0; j < i; j += 2)
		{
			if(sum[i] < sum[j])
			{
				swap(sum[i], sum[j]);
			}
		}
	}
	cout << sum;	
}