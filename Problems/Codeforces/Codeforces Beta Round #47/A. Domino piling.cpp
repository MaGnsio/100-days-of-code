//https://codeforces.com/problemset/problem/50/A
#include <bits/stdc++.h>

int main ()
{
	int m, n;
	std::cin >> m >> n;
	if ((m * n) % 2 == 0)
		std::cout << ((m * n) / 2);
	else
		std::cout <<  (((m * n) - 1) / 2);
}