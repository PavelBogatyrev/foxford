#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>

using namespace std;

//#define DEBUG

int main()
{
#ifdef DEBUG
    freopen("C:\\dev\\18352_data.txt", "r", stdin);
#endif // DEBUG
    deque <int> left;
    deque <int> right;
    vector <int> v;
    int n, g_num;
    string type;
    cin >> n;
    for (int i = 0; i < n; ++i) {
#ifdef DEBUG
        /* cout << i << "\n";*/
#endif // DEBUG
        cin >> type;
        if (type == "+") {
            cin >> g_num;
            right.push_back(g_num);
            if (right.size() - left.size() == 1) {
                left.push_back(right[0]);
                right.pop_front();
            }
        }
        else if (type == "*") {
            cin >> g_num;
            if (right.size() == left.size()) {
                left.push_back(g_num);
            }
            else if (left.size() - right.size() == 1) {
                right.push_front(g_num);
            }
        }
        else if (type == "-") {
            if (left.size() != 0) {
                v.push_back(left[0]);
                left.pop_front();
            }
            else {
                v.push_back(right[0]);
                right.pop_front();
            }
            if (left.size() - right.size() == 1) {
                right.push_back(*left.begin());
                left.pop_front();
            }
            else if (right.size() - left.size() == 1) {
                left.push_back(right[0]);
                right.pop_front();
            }
        }
    }
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << endl;
    }
    return 0;
}