//https://codeforces.com/contest/1391/problem/A
#include<bits/stdc++.h>

void solve ()
{
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
int main ()
{
    std::ios_base::sync_with_stdio(false);
    int testcase ;
    std::cin >> testcase ;
    for (int i = 0; i < testcase; i ++)
    {
        solve () ;
    }
}
//Every permutation is good.
/*Proof: We use the fact that for any set of numbers, it's bitwise OR is at least the maximum value in it.
Now, we just need to show that any subarray of length len has at least one element greater than or equal to len.
If the maximum element is <len, then, we have len elements all with values in the range [1,len−1].
By the pigeonhole principle, at least 2 of them must be the same contradicting the fact the it's a permutation.*/
//Time Complexity: O(n)