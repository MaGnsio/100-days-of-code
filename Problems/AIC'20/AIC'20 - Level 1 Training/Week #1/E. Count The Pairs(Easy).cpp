//https://codeforces.com/group/Rv2Qzg0DgK/contest/270965/problem/E
#include <bits/stdc++.h>

int main()
{
	int n, sum, ctr = 0;
	std::cin >> n;
	int arr[n];
	for (int& x : arr)
	{
	    std::cin >> x;
	}
	std::sort (arr, arr + n);
	sum = arr[0] + arr[n - 1];
	for(int i = n - 1 ; i > 0; i--)
	{
	    for(int j = i - 1; j >= 0; j--)
	    {
	      if(arr[i] + arr[j] == sum)
	        ctr++;
	    }
	}
	std::cout<<ctr;
}
