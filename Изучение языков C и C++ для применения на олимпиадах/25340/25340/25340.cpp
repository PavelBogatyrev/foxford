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
            text.insert(make_pair(s, 0));
            cout << 0 << " ";
        }
        else {
            cout << it->second + 1 << " ";
            text[s] += 1;
        }
    }
    //for (auto it = text.begin(); it != text.end(); ++it) {
    //    cout << it -> second << " ";
    //}
    return 0;
}