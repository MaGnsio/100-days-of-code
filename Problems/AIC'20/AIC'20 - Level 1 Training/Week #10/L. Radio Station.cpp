//https://codeforces.com/group/Rv2Qzg0DgK/contest/290492/problem/L
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
	int n, m;
	cin >> n >> m;
	vector<string> v1(n), v2(n), v3(m), v4(m);
	for (int i = 0; i < n; ++i) cin >> v1[i] >> v2[i];
	for (int i = 0; i < m; ++i) cin >> v3[i] >> v4[i];
	for (int i = 0; i < m; ++i)
	{
		cout << v3[i] << " " << v4[i] << " #";
		for (int j = 0; j < n; ++j)
		{
			if (v4[i] == v2[j] + ';')
			{
				cout << v1[j] << "\n";
			}
		}
	}
}
