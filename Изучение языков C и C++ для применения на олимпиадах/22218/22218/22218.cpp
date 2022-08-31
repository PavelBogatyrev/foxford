#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>


using namespace std;
int max(int* a, int n) {
    int maximum = INT_MIN;
    for (int i = 0; i < n; ++i) {
        if (a[i] > maximum) {
            maximum = a[i];
        }
    }
    return maximum;
}