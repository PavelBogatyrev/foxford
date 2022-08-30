#include <iostream>
#include <ctype.h>
#include<stdio.h>
#include<string.h>
#define MAXSIZE 100
using namespace std;
int main()
{
    int s, size = -1, start = 0;
    bool ans = true;
    char a[MAXSIZE];
    fgets(a, sizeof(a), stdin);
    for (int i = 0; i < 100; i++) {
        if (a[i] == NULL) {
            break;
        }
        else {
            size++;
        }
    }
    int end = size - 1;
    if (size % 2 == 0) {
        for (int i = 0; i < size / 2; i++) {
            if (a[start] - a[end] == 0 || a[start] - a[end] == 32 || a[start] - a[end] == -32) {
                start++;
                end--;
                continue;
            }
            else {
                ans = false;
                break;
            }
        }
    }
    else {
        for (int i = 0; i < (size / 2); i++) {
            if (a[start] - a[end] == 0 || a[start] - a[end] == 32 || a[start] - a[end] == -32) {
                start++;
                end--;
            }
            else {
                ans = false;
                break;
            }
        }
    }
    if (ans) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}