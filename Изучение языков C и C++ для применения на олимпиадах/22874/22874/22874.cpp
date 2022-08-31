#include <iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	n |= (1 << k);
	cout << n << endl;
}