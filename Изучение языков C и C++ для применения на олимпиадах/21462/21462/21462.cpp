#include <iostream>

using namespace std;

int main()
{
    int i, j, n, sum;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &j);
        if (j == 0) {
            sum++;
        }
    }
    printf("%d", sum);
    return 0;
}