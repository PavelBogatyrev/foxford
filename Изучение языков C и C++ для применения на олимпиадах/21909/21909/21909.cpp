#define _CRT_SECURE_NO_WARNINGS
constexpr auto SIZE = 256;
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int s;
    FILE* in = fopen("input.dat", "rb");
    FILE* out = fopen("output.dat", "wb");
    fseek(in, 0, SEEK_END);
    int size = ftell(in);
    for (int i = size; i > 0; --i) {
        fseek(in, i - 1, SEEK_SET);
        s = fgetc(in);
        fputc(s, out);
    }
    fclose(in);
    fclose(out);
    return 0;
}