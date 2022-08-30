#include <iostream>
#include <ctype.h>
#include<stdio.h>
#include<string.h>
#define MAXSIZE 100


using namespace std;

int main()
{
    int s, ans = 0;
    char a[MAXSIZE];
    fgets(a, sizeof(a), stdin);
    for (int j = 0; j < 100; j++) {
        if (isdigit(a[j])) {
            ans += (int(a[j]) - 48);
        }
    }
    printf("%d", ans);
    return 0;
}