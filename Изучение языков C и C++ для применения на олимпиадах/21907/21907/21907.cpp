#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    char str[100];
    FILE* in = fopen("input.dat", "rb");
    FILE* out = fopen("output.txt", "w");
    fseek(in, 0, SEEK_END);
    long long ans = ftell(in);
    fprintf(out, "%lld", ans);
    fclose(in);
    fclose(out);
    return 0;
}