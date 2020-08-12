//https://codeforces.com/contest/1391/problem/B
#include<bits/stdc++.h>

void solve ()
{
    int m, n, ctr{1};
    std::cin >> m >> n;
    char arr[m][n];
    for (auto& rows : arr)
    {
    	for (auto& elem : rows)
        {
    		std::cin >> elem;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (arr [i][n-1] == 'R')
            ctr++;
    }
    for (int j = 0; j < n; j++)
    {
        if (arr [m-1][j] == 'D')
            ctr++;
    }
   std::cout << ctr << "\n";
}
int main()
{
    std::ios_base::sync_with_stdio(false);

    int testcase ;
    std::cin >> testcase ;
    for (int i = 0; i < testcase; i++)
    {
        solve() ;
    }
}