#include <iostream>
#include <random>
const double ONE = 1000000.0;
using namespace std;

int main()
{
    int n;
    double a, b;
    cin >> n >> a >> b;
    a *= ONE;
    b *= ONE;
    double step = (b - a) / RAND_MAX;
    cout << fixed;
    cout.precision(6);
    srand(time(0));
    for (int i = 1; i <= n; ++i) {
        double d = rand() * step + a;
        double c = d / 1000000.0;
        cout << c << endl;
    }
    return 0;
}