#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, operations = "-+*", first_number, second_number;
    int operation = 0;
    long long ans;
    getline(cin, str);
    for (int i = 0; i <= 2; i++) {
        if (str.find(operations[i]) != -1) {
            operation = str.find(operations[i]);
            break;
        }
    }
    first_number.append(str, 0, operation);
    second_number.append(str, operation + 1, -1);
    if (str[operation] == 42) {
        ans = stoll(first_number) * stoll(second_number);
    }
    else if (str[operation] == 43) {
        ans = stoll(first_number) + stoll(second_number);
    }
    else if (str[operation] == 45) {
        ans = stoll(first_number) - stoll(second_number);
    }
    cout << ans;
    return 0;
}