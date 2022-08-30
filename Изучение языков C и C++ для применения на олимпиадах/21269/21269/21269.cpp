#include <iostream>

using namespace std;

int main()
{
    int n, a, counter = 0;
    scanf("%d", &n);
    while (n != 0) {
        scanf("%d", &a);
        counter += a;
        n--;
    }
    printf("%d", counter);
    return 0;
}