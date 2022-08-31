#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool is_digit_string(string n) {
	for (int i = 0; i < n.size(); ++i) {
		if (!isdigit(n[i])) {
			return false;
		}
	}
	return true;
}

int main()
{
	string n;
	int first, second;
	stack <int> a;
	while (cin >> n) {
		if (is_digit_string(n)) {
			a.push(std::stoi(n));
		}
		else {
			first = a.top();
			a.pop();
			second = a.top();
			a.pop();
			if (n == "+") {
				a.push(first + second);
			}
			else if (n == "-") {
				a.push(second - first);
			}
			if (n == "*") {
				a.push(first * second);
			}
		}
	}
	cout << a.top();
	return 0;
}