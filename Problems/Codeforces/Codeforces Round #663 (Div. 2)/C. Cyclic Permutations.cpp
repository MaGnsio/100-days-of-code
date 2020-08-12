//https://codeforces.com/contest/1391
#include<bits/stdc++.h>
#define ll long long

int main()
{
    std::ios_base::sync_with_stdio(false);
    ll n, pw{1}, fact{1};
    ll mod = 1e9 + 7;
    std::cin >> n;
    for (int i = 1; i < n; ++i)
    {
        pw *= 2;
        pw %= mod;
    }
    for (int i = 1; i <= n; ++i)
    {
        fact *= i;
        fact %= mod;
    }
    ll ans = (fact - pw + mod) % mod;
    std::cout << ans;
}