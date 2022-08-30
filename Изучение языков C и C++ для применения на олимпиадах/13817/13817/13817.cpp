#include <iostream>
#include <ctype.h>
#include<stdio.h>
#include<string.h>
#define MAXSIZE 100000
#define ALPHAVET 26


using namespace std;

int main()
{
    int s, ans = 0, b[ALPHAVET] = { 0 };
    char a[MAXSIZE];
    fgets(a, sizeof(a), stdin);
    for (int i = 0; i < MAXSIZE; i++) {
        if (a[i] == NULL) {
            break;
        }
        b[a[i] - 97] += 1;
    }
    for (int j = 0; j < ALPHAVET; j++) {
        printf("%d\t", b[j]);
    }
    return 0;
}