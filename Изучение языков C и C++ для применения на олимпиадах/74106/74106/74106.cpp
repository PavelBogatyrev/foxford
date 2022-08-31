#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    int counter = 0, n, x, y;
    cin >> n;
    map <int, int> text;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        auto it = text.find(x);
        if (it == text.end()) {
            text.insert(make_pair(x, 1));
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}