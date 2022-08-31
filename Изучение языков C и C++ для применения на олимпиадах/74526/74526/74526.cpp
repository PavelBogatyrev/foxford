#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main()
{
    vector <int> a;
    int n, x;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        a.push_back(i);
    }
    sort(a.begin(), a.end());
    do {
        for (int i = 0; i < n; ++i) {
            cout << a[i];
        }
        cout << "\n";
    } while (next_permutation(a.begin(), a.end()));
    return 0;
}