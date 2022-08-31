#include <iostream>

using namespace std;
int counter = 0;
bool rules[4][4];

void hanoi(int n, int from, int to) {
    int temp = 6 - from - to;
    if (n == 0) {
        return;
    }
    if (rules[from][to]) {
        hanoi(n - 1, from, temp);
        cout << n << " " << from << " " << to << endl;
        counter++;
        hanoi(n - 1, temp, to);
    }
    else {
        hanoi(n - 1, from, to);
        cout << n << " " << from << " " << temp << endl;
        counter++;
        hanoi(n - 1, to, from);
        cout << n << " " << temp << " " << to << endl;
        counter++;
        hanoi(n - 1, from, to);
    }

}

int main()
{
    rules[1][2] = true;
    rules[2][1] = false;
    rules[2][3] = true;
    rules[3][2] = false;
    rules[3][1] = true;
    rules[1][3] = false;
    //int n = 3;
    int n;
    cin >> n;
    hanoi(n, 1, 3);
    //cout << counter << endl;
    return 0;
}