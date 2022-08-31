#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	stack <char> a;
	string n;
	cin >> n;
	if (n.size() == 1) {
		cout << "NO";
		return 0;
	}
	for (int i = 0; i < n.size(); ++i) {
		char symb = n[i];
		if (symb == '(' || symb == '{' || symb == '[') {
			a.push(n[i]);
		}
		else {
			if (a.empty()) {
				cout << "NO";
				return 0;
			}
			char symb1 = a.top();
			if (
				(symb1 == '(' && symb == ')') ||
				(symb1 == '{' && symb == '}') ||
				(symb1 == '[' && symb == ']')) {
				a.pop();
			}
			else {
				cout << "NO";
				return 0;
			}
		}
	}
	if (a.empty()) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}