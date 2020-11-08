//https://codeforces.com/group/Rv2Qzg0DgK/contest/270964/problem/L
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
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	cout << (s2 == s4 ? "ARE Brothers" : "NOT");
}
