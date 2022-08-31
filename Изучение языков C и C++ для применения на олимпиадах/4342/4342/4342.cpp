#include <iostream>
#include <cmath>
#include <chrono>

#define ll long long

using namespace std;

ll power_1(ll num, ll deg) {
    ll result = 1;
    for (int i = 0; i < deg; ++i) {
        result = (result % 1000) * (num % 1000);
    }
    return result % 1000;
}

ll powerFast(ll num, ll deg) {
    ll result = 1;
    while (deg) {
        if (deg % 2 == 0) {
            deg /= 2;
            num = (num % 1000) * (num % 1000);
        }
        else {
            deg--;
            result = (result % 1000) * (num % 1000);
        }
    }
    return result % 1000;
}

int main()
{
    ll a, n;
    cin >> a >> n;
    cout << (powerFast(a, n)) << endl;
    //auto start = std::chrono::steady_clock::now();
    //cout << (powerFast(a, n)) << endl;
    //auto end = std::chrono::steady_clock::now();
    //std::chrono::duration<double> elapsed_seconds = end - start;
    //std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";

    // start = std::chrono::steady_clock::now();
    //cout << (power_1(a, n)) << endl;
    // end = std::chrono::steady_clock::now();
    //elapsed_seconds = end - start;
    //std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
    return 0;
}