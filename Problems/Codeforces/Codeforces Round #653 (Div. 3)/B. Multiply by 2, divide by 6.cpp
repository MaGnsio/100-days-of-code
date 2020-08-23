//https://codeforces.com/problemset/problem/1374/B
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
	int t;
	cin >> t;
	while (t--)
	{
		//the operations could be: divide by 3 which represents 2 moves (*2 && /6) and divide by 2 which represents the times we divided only by 6
		//so the answer should be: 2 * (times we divided by 3) minus the time we divide by 2 (the time we only did one move) : opr1 >= opr2
		int n, nf2 = 0, nf3 = 0;
		cin >> n;
		while (n % 3 == 0)
		{
			n /= 3;
			nf3++;
		}
		while (n % 2 == 0)
		{
			n /= 2;
			nf2++;
		}
		if (n == 1 && nf3 >= nf2)
		{
			cout << (2 * nf3) - nf2 << "\n";
		}
		else
		{
			cout << -1 << "\n";
		}
	}
}
