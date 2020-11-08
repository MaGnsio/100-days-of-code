//https://codeforces.com/group/Rv2Qzg0DgK/contest/270965/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<long> v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end());
    long diff = (1 + v[2] - v[1] - v[0]);
    diff = (diff < 0) ? 0 : diff;
    cout << diff;
}
