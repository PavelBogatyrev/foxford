#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int x, ans;
    char letter;
    FILE* in = fopen("input.txt", "r");
    FILE* out = fopen("output.txt", "w");
    fscanf(in, "%d", &x);
    fseek(in, x, SEEK_SET);
    fscanf(in, "%c", &letter);
    fprintf(out, "%c", letter);
    fclose(in);
    fclose(out);
}