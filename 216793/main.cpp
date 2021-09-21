#include <iostream>

using namespace std;
bool isleap(int y) {
    if(((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}
int main() {
    const int MONTHS_SIZE = 12;
    int months[MONTHS_SIZE] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int n, d, m, y, dif;
    int end_d = 0, end_m = 0, end_y = 0;
    scanf("%d", &n);
/////////////////    Debug only
//    n = 15030007;
/////////////////
//    printf("%d", n);
    d = n / 1000000;
    m = (n / 10000) % 100;
    y = n % 10000;
//    printf("%d %d %d\n",d, m, y);
    end_d = d;
    if(isleap(y)) {
        months[1] = 29;
    } else {
        months[1] = 28;
    }
    for(int i = 0; i < m-1; i++) {
        end_m += months[i];
    }
    for(int j = 1; j < y; j++){
        if(isleap(j)) {
            end_y += 366;
        } else {
            end_y += 365;
        }
    }
    dif = end_d + end_m + end_y;
    printf("%d\n", dif);
    return 0;
}
