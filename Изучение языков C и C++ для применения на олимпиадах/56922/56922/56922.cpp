#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;

//MAPA
int main() {
	ll n;
	cin >> n;
	string s, lat;
	map  <string, vector <string>> words;
	for (int i = 0; i <= n; ++i) {
		int counter = 1;
		getline(cin, s, '\n');
		bool in_word = true;
		int start = 0, end = 0;
		string value;
		for (int i = 0; i < s.size(); ++i) {

			if (isalpha(s[i]) && !in_word) {
				start = i;
				in_word = true;
				end++;
			}
			else if (isalpha(s[i]) && in_word) {
				end++;
			}
			else if (!isalpha(s[i]) && in_word) {
				//cout << s.substr(start, end) << endl;
				string tmp = s.substr(start, end);
				if (counter == 1) {
					value = tmp;
				}
				else {
					words[tmp].push_back(value);
				}


				in_word = false;
				end = 0;
				counter++;
			}

		}
		if (in_word) {
			//cout << s.substr(start, end) << endl;
			string tmp = s.substr(start, end);
			if (counter == 1) {
				value = tmp;
			}
			else {
				words[tmp].push_back(value);
			}
			counter++;
		}

	}
	cout << words.size() << endl;
	map <string, vector<string>> ::iterator it = words.begin();
	while (it != words.end()) {
		cout << it->first << " - ";
		vector <string> values = it->second;
		sort(values.begin(), values.end());
		for (int i = 0; i < values.size(); ++i) {
			cout << values[i];
			if (i < values.size() - 1) cout << ", ";
		}
		cout << endl;
		it++;
	}
	return 0;
}