#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> buildings;
    int n, x, ans1 = 0, ans2 = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> x;
        buildings.push_back(x);
    }
    for (int i = 0; i < n; ++i) {
        if (buildings[i] == 1) {
            for (int j = 0; j < n; ++j) {
                if (buildings[j] == 2) {
                    if (ans1 == 0) {
                        ans1 = abs(j - i);
                    }
                    else {
                        if (abs(j - i) < ans1) {
                            ans1 = abs(j - i);
                        }
                    }
                }
            }
        }
        if (ans2 < ans1) {
            ans2 = ans1;
        }
        ans1 = 0;
    }
    cout << ans2;
    return 0;
}