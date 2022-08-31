#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n, xor_n;
    cin >> xor_n;
    while (cin >> n) {
        xor_n = xor_n ^ n;
    }
    cout << xor_n;
}