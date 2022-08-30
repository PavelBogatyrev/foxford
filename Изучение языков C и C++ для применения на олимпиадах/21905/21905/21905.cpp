#include <cstdio>
#include <fstream>
using namespace std;

int main() {
    int x, sum = 0;
    FILE* in = fopen("input.txt", "r");
    FILE* out = fopen("output.txt", "w");
    while (fscanf(in, "%d", &x) == 1) {
        sum += x;
    }
    fclose(in);
    fclose(out);
    ifstream in2("input.txt");
    ofstream out2("output.txt");
    out2 << sum;
    in2.close();
    out2.close();
}