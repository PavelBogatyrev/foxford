#include <iostream>
#include <ctype.h>
#include<stdio.h>
#include<string.h>
#define MAXSIZE 20000


using namespace std;

int main()
{
    int s, ans = 0, operation, first_sum, second_sum;
    char a[MAXSIZE];
    fgets(a, sizeof(a), stdin);
    ans = a[0] - 48;
    for (int j = 1; j < MAXSIZE; j += 2) {
        if (a[j] == NULL) {
            break;
        }
        if (a[j] == 43) {
            ans += (a[j + 1] - 48);
        }
        else if (a[j] == 45) {
            ans += (0 - (a[j + 1] - 48));
        }
    }
    printf("%d", ans);
    return 0;
}