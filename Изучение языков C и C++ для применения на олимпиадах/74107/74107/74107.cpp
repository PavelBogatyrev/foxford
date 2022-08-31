#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <chrono>
#include <set>
#define ll long long

using namespace std;

//#define DEBUG

int main()
{
#ifdef DEBUG
    freopen("C:\\dev\\foxford\\74107\\data.txt", "r", stdin);
#endif
    auto start = chrono::high_resolution_clock::now();
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, number;
    ll passports = 0;
    cin >> n;
    multiset <ll> s;
    for (int i = 0; i < n; ++i) {
        cin >> number;
        s.insert(number);
    }
    while (s.size() > 1) {
        multiset<ll>::iterator it = s.begin();
        ll first = *(it);
        ll second = *(++it);
        passports += (first + second);
        s.erase(s.begin(), next(s.begin(), 2));
        s.insert(first + second);
#ifdef DEBUG 
        //cout << s.size() << "\t" << passports << endl;
#endif
    }
#ifdef DEBUG 
    auto end = chrono::high_resolution_clock::now();
    auto ints = chrono::duration_cast<chrono::milliseconds>(end - start);
    cout << "execution time is " << ints.count() << endl;
#endif
    cout << passports << "\n";
    return 0;
}