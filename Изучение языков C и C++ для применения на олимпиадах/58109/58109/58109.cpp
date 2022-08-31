#include <random>
#include <iostream>
#include <limits.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    unsigned long long a, b, r1, r2, r3;
    cin >> n >> a >> b;
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        r1 = rand();
        r2 = r1 << 31;
        r3 = r2 + rand();
        ll r4 = b - a + 1;
        ll r5 = r3 % r4;
        ll r6 = r5 + a;
        cout << r6 << '\n';
    }
    cout << '\n';
}