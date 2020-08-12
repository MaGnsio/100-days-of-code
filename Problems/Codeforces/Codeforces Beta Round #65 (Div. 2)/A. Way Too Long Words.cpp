//https://codeforces.com/problemset/problem/71/A
#include <bits/stdc++.h>

int main()
{
	int n;
	std::string word;
	std::cin >> n;		
	for (int i = n; i > 0; --i)
	{
		std::cin >> word;
		if (word.length () > 10)
			std::cout << word[0] << word.length () - 2 << word[word.length () - 1] << std::endl;
		else
			std::cout << word << std::endl;
	}
}