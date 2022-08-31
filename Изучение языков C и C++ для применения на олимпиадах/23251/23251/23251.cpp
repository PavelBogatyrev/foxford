#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c, ans, p;
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	ans = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << fixed;
	cout.precision(6);
	cout << ans;
}