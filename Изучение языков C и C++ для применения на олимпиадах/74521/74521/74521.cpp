#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n1, n2;
    int x, y;
    vector <int> a;
    vector <int> b;

    cin >> n1;

    for (int i = 0; i < n1; ++i) {
        cin >> x;
        a.push_back(x);
    }

    cin >> n2;

    for (int j = 0; j < n2; ++j) {
        cin >> y;
        b.push_back(y);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < b.size(); ++i) {
        if (!binary_search(a.begin(), a.end(), b[i])) {
            cout << "NO";
            return 0;
        }
    }

    for (int i = 0; i < a.size(); ++i) {
        if (!binary_search(b.begin(), b.end(), a[i])) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}