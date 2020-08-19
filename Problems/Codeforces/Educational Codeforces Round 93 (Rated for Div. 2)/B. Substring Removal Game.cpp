//https://codeforces.com/contest/1398/problem/B
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

void solve ()
{
	string s;
	cin >> s;
	vector<int> v;
	for (int i = 0; i < s.length (); ++i)
	{
		if (s[i] == '1')
		{
			int j = i;
			while (j + 1 < s.length () && s[j + 1] == '1')
			{
				++j;
			}
			v.push_back (j - i + 1);
			i = j;
		}
	}
	sort (v.rbegin (), v.rend ());
	int ans = 0;
	for (int i = 0; i < v.size (); i += 2)
	{
		ans += v[i];
	}
	cout << ans << "\n";
}

int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int t;
	cin >> t;
	while (t--)
	{
		solve ();
	}
}
/*The following greedy strategy works: during each turn, delete the largest possible substring consisting of 1-characters.
*So we have to find all blocks of 1-characters, sort them according to their length and model which blocks are taken by
*Alice, and which — by Bob.
*
*Why does the greedy strategy work? It's never optimal to delete some part of the block of ones — because we either have
*to spend an additional turn to delete the remaining part, or allow our opponent to take it (which is never good).
*Why don't we need to delete zeroes? If we delete a whole block of zeroes, our opponent can take the newly formed block
*of 1's during their turn, and it is obviously worse than taking a part of that block.
*And deleting some part of a block of zeroes doesn't do anything — our opponent will never delete the remaining
*part because it's suboptimal.*/