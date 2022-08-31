#include <iostream>
#include <map>

#define ll long long

using namespace std;

class M {
public:
	string n;
	string p;
	ll c;
};

int main()
{
	map <string, map<string, ll>> buy;
	M x;
	while (cin >> x.n >> x.p >> x.c) {
		if (buy.find(x.n) != buy.end()) {
			if (buy[x.n].find(x.p) == buy[x.n].end()) {
				buy[x.n].insert(buy[x.n].end(), make_pair(x.p, x.c));
			}
			else {
				buy[x.n][x.p] += x.c;
			}
		}
		else {
			map<string, ll> tmp;
			tmp.insert(tmp.end(), make_pair(x.p, x.c));
			buy.insert(buy.end(), make_pair(x.n, tmp));
		}
	}
	for (auto it : buy) {
		cout << it.first << ":" << "\n";
		for (auto it1 : it.second) {
			cout << it1.first << " " << it1.second << endl;
		}
	}
	return 0;
}