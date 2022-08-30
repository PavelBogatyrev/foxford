#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int n;
    float x;
    scanf("%d", &n);
    float* a = new float[n];
    for (int i = 0; i < n; ++i) {
        scanf("%f", &a[i]);
    }
    float max = 0.0;
    for (int j = 0; j < n; ++j) {
        if (a[j] >= max) {
            max = a[j];
        }
    }
    int max_int = static_cast<int>(max);
    string max_str = to_string(max_int);
    for (int j = 0; j < n; ++j) {
        printf("%*.2f\n", max_str.length() + 3, a[j]);
    }
    delete[]a;
}