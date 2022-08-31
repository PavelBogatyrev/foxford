#include <iostream>

using namespace std;

void reverse() {
    int a;
    cin >> a;
    if (a != 0) {
        reverse();
        cout << a << endl;
        return;
    }
    else {
        cout << a << endl;
        return;
    }
}

int main()
{
    reverse();
}