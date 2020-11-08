//https://codeforces.com/group/Rv2Qzg0DgK/contest/276233/problem/O
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int max_elem (int a[], int n);
int min_elem (int a[], int n);
int pri_ctr (int a[], int n);
int pal_ctr (int a[], int n);
int mad_ctr (int a[], int n);

int main ()
{
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	int n;
	cin >> n;
	int a[n];
	for (auto& elem : a) cin >> elem;
	cout << "The maximum number : " << max_elem (a, n) << "\n";
	cout << "The minimum number : " << min_elem (a, n) << "\n";
	cout << "The number of prime numbers : " << pri_ctr (a, n) << "\n";
	cout << "The number of palindrome numbers : " << pal_ctr (a, n) << "\n";
	cout << "The number that has the maximum number of divisors : " << mad_ctr (a, n) << "\n";
}

int max_elem (int a[], int n)
{
	int ma = 0;
	for (int i = 0; i < n; ++i) ma = max (ma, a[i]);
	return ma;
}

int min_elem (int a[], int n)
{
	int mi = INT_MAX;
	for (int i = 0; i < n; ++i) mi = min (mi, a[i]);
	return mi;
}

int pri_ctr (int a[], int n)
{
	int ctr = 0;
	for (int i = 0; i < n; ++i)
	{
		bool chk = true;
		for (int j = 2; j < a[i]; ++j)
		{
			if (a[i] % j == 0)
			{
				chk = false;
				break;
			}
		}
		if (chk && a[i] > 1) ctr++;
	}
	return ctr;
}

int pal_ctr (int a[], int n)
{
	int ctr = 0;
	for (int i = 0; i < n; ++i)
	{
		int re = 0;
		for (int j = a[i]; j != 0; j /= 10) re = (re * 10) + (j  % 10);
		if (re == a[i]) ctr++;
	}
	return ctr;
}

int mad_ctr (int a[], int n)
{
	int mad = 0, mctr = 0;
	for (int i = 0; i < n; ++i)
	{
		int ctr = 0;
		for (int j = 1; j <= a[i]; ++j)
		{
			if (a[i] % j == 0) ctr++;
		}
		if (ctr == mctr) mad = max (mad, a[i]);
		else if (ctr > mctr)
		{
			mctr = ctr;
			mad = a[i];
		}
	}
	return mad;
}
