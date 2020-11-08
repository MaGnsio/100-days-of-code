//https://codeforces.com/group/Rv2Qzg0DgK/contest/286457/problem/E
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
    int n;
    int freq[20000009] = {};
    cin >> n;
    while(n % 2 == 0)
    {
        freq[2]++;            
        n/=2;
    }
    for(int i = 3; i * i <= n; i += 2)
    {
        while(n % i == 0)
        {
            freq[i]++;
            n/=i;
        }
    }
    if(n > 2) freq[n]++;
    for (int i = 0; i < 20000009; ++i)
    {
        if(freq[i]) cout << i << " " << freq[i] << "\n";
    }
}
