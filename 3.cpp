#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

int main() 
	{

	long long cnt1, cnt2, x, y,l , r, m;
	cin >> cnt1 >> cnt2 >> x >> y;
r =1000000000;
l=0;
	while (r > l + 1) {
		m = (l + r) / 2;
		if (m - m / x >= cnt1 && m - m / y - max(0LL, cnt1 - m / y + m / (x * y))  >= cnt2)
			r = m;
		else
			l = m;
	}
	cout << r << endl;
	return 0;
}
