//https://codeforces.com/problemset/problem/1426/E
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
	cin >> n;
	vector<int> a(3), b(3);
	for (auto& elem : a) cin >> elem;
	for (auto& elem : b) cin >> elem;
	int ans1 = INT_MAX;
	int ans2 = min (a[0], b[1]) + min (a[1], b[2]) + min (a[2], b[0]);
	vector<pair<int, int>> ord;
	ord.push_back ({0, 0});
	ord.push_back ({0, 2});
	ord.push_back ({1, 0});
	ord.push_back ({1, 1});
	ord.push_back ({2, 1});
	ord.push_back ({2, 2});
	sort (ord.begin (), ord.end ());
	do
	{
		vector<int> a1 = a, b1 = b;
		for (int i = 0; i < ord.size (); ++i)
		{
			int cnt = min (a1[ord[i].F], b1[ord[i].S]);
			a1[ord[i].F] -= cnt;
			b1[ord[i].S] -= cnt;
		}
		int cur = min(a1[0], b1[1]) + min(a1[1], b1[2]) + min(a1[2], b1[0]);
		ans1 = min(ans1, cur);
	} while (next_permutation (ord.begin (), ord.end ()));
	cout << ans1 << " " << ans2;
}
