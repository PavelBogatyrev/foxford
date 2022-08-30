#include <iostream>

using namespace std;

int main()
{
    int n, j, counter = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &j);
        a[i] = j;
    }
    for (int i = 1; i < n - 1; i++) {
        if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
            counter++;
        }
    }
    printf("%d", counter);
    return 0;
}