//https://codeforces.com/problemset/problem/231/A
#include <bits/stdc++.h>

int main ()
{
	int n, ctr = 0;
	bool a, b, c;
	std::cin >> n;
	for (int i = n; i > 0; --i)
	{
		std::cin >> a >> b >> c;
		if ((a && b) || (a && c) || (b && c))
			ctr++;
	}
	std::cout << ctr;
}