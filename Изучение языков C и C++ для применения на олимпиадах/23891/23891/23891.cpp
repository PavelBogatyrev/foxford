#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, strcur, strmax;
    int lencur = 0, lenmax = 0;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++) {
        if (isalpha(str[i])) {
            strcur.push_back(str[i]);
            lencur++;
        }
        else if (!isalpha(str[i]) && !strcur.empty()) {
            if (lencur > lenmax) {
                strmax = strcur;
                lenmax = lencur;
            }
            strcur.clear();
            lencur = 0;
        }
    }
    if (!strcur.empty() && lencur > lenmax) {
        strmax = strcur;
    }
    cout << strmax;
    return 0;
}