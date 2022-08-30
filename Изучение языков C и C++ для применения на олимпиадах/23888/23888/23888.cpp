#include <iostream>
#include <string>
using namespace std;

int main() {
    string s_source, s_encoded;
    (getline(cin, s_source));
    int n = 0;
    n = s_source.length();
    for (int i = 0; i < n; i++) {
        if ((s_source[i] >= 65 && s_source[i] <= 87) || (s_source[i] >= 97 && s_source[i] <= 119)) {
            s_encoded.push_back(s_source[i] + 3);
        }
        else if (s_source[i] >= 88 && s_source[i] <= 90) {
            s_encoded.push_back(67 - (90 - s_source[i]));
        }
        else if (s_source[i] >= 120 && s_source[i] <= 122) {
            s_encoded.push_back(99 - (122 - s_source[i]));
        }
        else {
            s_encoded.push_back(s_source[i]);
        }
    }
    cout << s_encoded;
    return 0;
}