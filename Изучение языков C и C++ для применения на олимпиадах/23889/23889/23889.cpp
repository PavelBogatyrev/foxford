#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s_source;
    int words = 0;
    (getline(cin, s_source));
    for (int i = 0; i < s_source.size(); i++) {
        if (((s_source[i] >= 65 && s_source[i] <= 90) || (s_source[i] >= 97 && s_source[i] <= 122)) && ((s_source[i + 1] < 65 || s_source[i + 1] > 90) && (s_source[i + 1] < 97 || s_source[i + 1] > 122))) {
            words += 1;
        }
    }
    cout << words;
    return 0;
}