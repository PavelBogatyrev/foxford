#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class boy {
public:
	string name;
	int height;
	int weight;
	int attract_w;
	int attract_h;
};

bool sort_boy(const boy& b1, const boy& b2) {
	if (b1.attract_h < b2.attract_h) {
		return true;
	}
	else if (b1.attract_h > b2.attract_h) {
		return false;
	}
	else {
		if (b1.attract_w < b2.attract_w) {
			return true;
		}
		else if (b1.attract_w > b2.attract_w) {
			return false;
		}
		else {
			return b1.name < b2.name;
		}
	}
	return true;
}

int main()
{
	vector <boy> men;
	int n, h, w;
	string name;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		boy b;
		cin >> b.name >> b.height >> b.weight;
		if (b.weight <= 75) {
			b.attract_w = 75 - b.weight;
		}
		else {
			b.attract_w = b.weight + 75;
		}
		b.attract_h = abs(b.height - 180);
		men.push_back(b);

	}
	sort(men.begin(), men.end(), sort_boy);
	//cout << "\n";
	for (boy b : men) {
		//cout << b.name << "\t" << b.height << "\t" << b.delta_height() << "\t" << b.weight << "\t" << b.attract_w << "\n";
		cout << b.name << "\n";
	}
	return 0;
}