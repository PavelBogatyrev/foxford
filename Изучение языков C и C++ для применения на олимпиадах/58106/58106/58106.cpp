#include <iostream>
#include <random>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; ++i) {
        printf("%d\n", rand() % (b - a + 1) + a);
    }
    return 0;
}