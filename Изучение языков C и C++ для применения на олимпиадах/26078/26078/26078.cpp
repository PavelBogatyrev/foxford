#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> buildings;
    int n, x, elem, ans = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        buildings.push_back(x);
    }
    sort(buildings.begin(), buildings.end());
    elem = buildings.size() / 2;
    //for (int i : buildings) {
    //    ans += abs(elem - i);
    //}
    cout << buildings[elem];
    return 0;
}