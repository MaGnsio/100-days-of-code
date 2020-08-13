//https://codeforces.com/problemset/problem/282/A
#include <bits/stdc++.h>

int main ()
{
	int stat, x = 0;
	std::string opr;
	std::cin >> stat;
	for (int i = 0; i < stat; i++)
	{
		std::cin >> opr;
		if (opr == "X++" || opr == "++X"){x++;}
		else {x--;}
	}
	std::cout << x;
}