#include <iostream>

using namespace std;

int main()
{
    int n, m, h, same_part;
    scanf("%d", &n);
    same_part = 540 + n * 45 + (n - 1) / 2 * 15 + n / 2 * 5;
    h = same_part / 60;
    m = same_part % 60;
    printf("%d %d", h, m);
    return 0;
}