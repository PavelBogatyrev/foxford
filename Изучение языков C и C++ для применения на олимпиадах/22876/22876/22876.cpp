#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	cout << (n & (int)pow(2, k) - 1) << endl;
}