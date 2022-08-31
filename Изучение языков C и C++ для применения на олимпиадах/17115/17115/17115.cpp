#include <iostream>
#include <cmath>
#include <cstdint>
using namespace std;

int main()
{
    double a, b, c, eps = 1e-8, tmp;
    cin >> a >> b >> c;
    tmp = a + b;
    cout << fixed;
    cout.precision(7);
    if (abs(tmp - c) <= eps) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}