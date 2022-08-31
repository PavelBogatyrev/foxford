#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, rub, cop;
	cin >> a;
	rub = int(a);
	cop = (a - rub);
	cop = round(cop * 100);
	cop = (int)cop;
	cout << rub << " " << cop << endl;
}