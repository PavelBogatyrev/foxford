#define _CRT_SECURE_NO_WARNINGS
constexpr auto SIZE = 256;
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    long long symb[SIZE];
    int s;
    int min_max_index = 255;
    FILE* in = fopen("input.dat", "rb");
    FILE* out = fopen("output.txt", "w");

    for (int i = 0; i < SIZE; ++i) {
        symb[i] = 0;
    }

    while ((s = fgetc(in)) != EOF) {
        symb[s] += 1;
    }
    long long maximum = symb[0];
    for (int i = 0; i < SIZE; ++i) {
        if (symb[i] > maximum) {
            maximum = symb[i];
        }
    }
    for (int i = 0; i < SIZE; ++i) {
        if (maximum == symb[i]) {
            if (i < min_max_index) {
                min_max_index = i;
            }
        }
    }
    fprintf(out, "%d\n", min_max_index);
    fclose(in);
    fclose(out);
    return 0;
}