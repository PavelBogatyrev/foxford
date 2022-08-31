#include <iostream>
#include <cmath>
#include <cstdint>
using namespace std;

int main()
{
    double a, b, c, x1, x2;
    cin >> a >> b >> c;
    x1 = (-b + sqrt(pow(b, 2) - 4.0 * a * c)) / (2.0 * a);
    x2 = (-b - sqrt(pow(b, 2) - 4.0 * a * c)) / (2.0 * a);
    cout << fixed;
    cout.precision(6);
    cout << min(x2, x1) << " " << max(x1, x2) << endl;
}