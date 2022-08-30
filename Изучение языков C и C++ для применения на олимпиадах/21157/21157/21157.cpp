#include <iostream>

using namespace std;

int main()
{
    int n, f, s, t, ans;
    scanf("%d", &n);
    f = n / 100;
    s = n / 10 % 10;
    t = n % 10;
    ans = f + s + t;
    printf("%d", ans);
    return 0;
}