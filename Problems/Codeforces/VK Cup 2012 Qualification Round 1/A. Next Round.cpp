//https://codeforces.com/problemset/problem/158/A
#include <bits/stdc++.h>

int main ()
{
	int n, k, ctr{0};
	std::cin >> n >> k;
	int arr[n];
	for (int& x : arr)
	{
		std::cin >> x;
	}
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] >= arr[k - 1] && arr[i] > 0)
			ctr++;
	}
	std::cout << ctr;
}