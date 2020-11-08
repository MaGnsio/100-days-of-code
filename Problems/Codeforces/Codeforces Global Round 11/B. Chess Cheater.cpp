//https://codeforces.com/contest/1427/problem/B
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
		int n, k;
		string s;
		cin >> n >> k >> s;
		int wins = 0, losses = 0, winning_streaks = 0;
		vector<int> losing_streaks;
		for (int i = 0; i < n; ++i)
		{
			if (s[i] == 'W')
			{
				wins++;
				if (i == 0 || s[i - 1] == 'L') winning_streaks++;
			}
			if (s[i] == 'L')
			{
				losses++;
				if (i == 0 || s[i - 1] == 'W') losing_streaks.push_back (0);
				losing_streaks.back ()++;
			}
		}
		if (k >= losses)
		{
			cout << (2 * n) - 1 << "\n";
			continue;
		}
		if (wins == 0)
		{
			if (k == 0) cout << 0 << "\n";
			else cout << ((2 * k) - 1) << "\n";
			continue;
		}
		if (s[0] == 'L') losing_streaks[0] = INT_MAX;
		if (s[n - 1] == 'L') losing_streaks.back () = INT_MAX;
		sort (losing_streaks.begin (), losing_streaks.end ());
		wins += k;
		for (auto& ls : losing_streaks)
		{
			if (ls > k) break;
			k -= ls;
			winning_streaks--;
		}
		cout << ((2 * wins) - winning_streaks) << "\n";
	}
}
