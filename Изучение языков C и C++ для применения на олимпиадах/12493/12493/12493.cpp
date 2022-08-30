#include <iostream>

using namespace std;

int main()
{
    int n, a = 1, ans = 1;
    scanf("%d", &n);
    while (a <= n) {
        ans *= a;
        a++;
    }
    printf("%d", ans);
    return 0;
}