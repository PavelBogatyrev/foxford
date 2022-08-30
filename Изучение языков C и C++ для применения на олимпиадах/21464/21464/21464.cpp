#include <iostream>

using namespace std;

int main()
{
    int n, j;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &j);
        a[i] = j;
    }
    int counter = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > counter) {
            counter = a[i];
        }
    }
    printf("%d", counter);
    return 0;
}