#include <cstdio>

using namespace std;

int main() {
    int n, h, m;
    scanf("%d", &n);
    h = (n / 60) % 24;
    m = (n % 60) % 1440;
    printf("%d %d\n", h, m);
}