#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, k, del = 0, start;
	cin >> n >> k;
	vector <int> numbers;
	for (int i = 1; i <= n; ++i) {
		numbers.push_back(i);
	}
	while (numbers.size() > 1) {
		start = del % numbers.size();
		del = (start + k - 1) % numbers.size();
		numbers.erase(numbers.begin() + del);
	}
	cout << numbers[0];
}