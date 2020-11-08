//https://codeforces.com/group/Rv2Qzg0DgK/contest/270965/problem/B
#include <iostream>
using namespace std;

int main ()
{
	double m, n, a, b, avg = std::numeric_limits<double>::max();
	cin >> m >> n;
	for (int i = 0; i < m; i++)
	{
		std::cin >> a >> b;
		if(a / b < avg)
		{
			avg = a / b;
		}
	}
	cout << setprecision(7) << avg * n;
}
