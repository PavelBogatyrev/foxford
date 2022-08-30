#include <iostream>

using namespace std;

int main()
{
    int a, b, n, rub, cop;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &n);
    rub = a * n + (b * n) / 100;
    cop = b * n % 100;
    printf("%d %d", rub, cop);
    return 0;
}