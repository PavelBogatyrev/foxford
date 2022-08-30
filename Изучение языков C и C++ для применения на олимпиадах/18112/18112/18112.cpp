#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main()
{
    int h, m;
    char t;
    scanf("%d:%d %c", &h, &m, &t);
    if (t == 'a') {
        if (h == 12) {
            h = 0;
        }
    }
    else {
        if (h < 12) {
            h += 12;
        }
    }
    printf("%02d:%02d", h, m);
    return 0;
}