#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    int len = str.size();
    for (int i = 0; i < len; i++) {
        if (i == 0 && isalpha(str[i])) {
            if (str[i] >= 97 && str[i] <= 122) {
                str[i] -= 32;
            }
        }
        else if (i == 0 && !isalpha(str[i]) && isalpha(str[i + 1]) && str[i + 1] >= 97 && str[i + 1] <= 122) {
            str[i + 1] -= 32;
        }
        else if (i != 0 && !isalpha(str[i]) && isalpha(str[i + 1]) && str[i + 1] >= 97 && str[i + 1] <= 122) {
            str[i + 1] -= 32;
        }
        else if (i != 0 && isalpha(str[i - 1]) && isalpha(str[i])) {
            if (str[i] >= 65 && str[i] <= 90) {
                str[i] += 32;
            }
        }
    }
    cout << str;
    return 0;
}