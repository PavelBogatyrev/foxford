#include <iostream>

using namespace std;

int main()
{
    int n, d = 1;
    scanf("%d", &n);
    while (d <= n) {
        if (n % d == 0) {
            printf("%d ", d);
        }
        d++;
    }
    return 0;
}