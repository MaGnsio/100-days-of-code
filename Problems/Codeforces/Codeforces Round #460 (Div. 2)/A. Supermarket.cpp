//https://codeforces.com/problemset/problem/919/A
#include <bits/stdc++.h>

int main ()
{
	double m, n, a, b, avg = std::numeric_limits<double>::max();
	std::cin >> m >> n;

	for (int i = 0; i < m; i++)
	{
		std::cin >> a >> b;
		if(a / b < avg)
		{
			avg = a / b;
		}
	}
	std::cout << std::setprecision(7) << avg * n;
}