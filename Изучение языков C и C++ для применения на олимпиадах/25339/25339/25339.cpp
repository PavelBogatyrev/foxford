#include <iostream>
#include <set>

using namespace std;

int main()
{
    string s;
    set <string> text;
    while (cin >> s) {
        text.insert(s);
    }
    cout << text.size();
    return 0;
}