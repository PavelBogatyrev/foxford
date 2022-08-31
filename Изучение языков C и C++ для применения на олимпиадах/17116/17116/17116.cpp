#include <iostream>
#include <cmath>
using namespace std;


int main() {
	float x, y, eps = 1e-5;
	int days = 1;
	cin >> x >> y;
	while (y >= x + eps) {
		x += x * 0.7;
		days++;
	}
	cout << days;
}