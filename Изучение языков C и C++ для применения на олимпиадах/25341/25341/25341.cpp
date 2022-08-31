#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    string s;
    map <string, int> text;
    while (cin >> s) {
        auto it = text.find(s);
        if (it == text.end()) {
            text.insert(make_pair(s, 1));
        }
        else {
            text[s] += 1;
        }
    }
    int ans_num = 0;
    string ans_word = "";
    for (auto it = text.begin(); it != text.end(); ++it) {
        if (ans_num < it->second) {
            ans_word = it->first;
            ans_num = it->second;
        }
        else if (ans_num == it->second) {
            if (ans_word > it->first) {
                ans_word = it->first;
                ans_num = it->second;
            }
        }
    }
    cout << ans_word;
    return 0;
}