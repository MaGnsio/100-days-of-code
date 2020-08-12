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