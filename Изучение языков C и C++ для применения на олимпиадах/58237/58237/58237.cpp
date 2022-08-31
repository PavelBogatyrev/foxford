#include <iostream>
#include <vector>
#include <random>
#define ll long long

using namespace std;

int main()
{
    ll n, k;
    vector <ll> number;
    srand(time(0));

    cin >> n >> k;
    for (int i = 1; i <= k; ++i) {
        number.push_back(i);
    }

    for (int i = 0; i < n; ++i) {
        //Меняем местами рандомный и последний элементы.
        for (int j = number.size(); j > 0; --j) {
            //Получаем рандомный индекс.
            ll ind = rand() % j;
            //Меняем элемент с рандомным индексом и последний элемент местами.
            swap(number[ind], number[number.size() - 1]);
        }
        for (ll l : number) {
            cout << l << " ";
        }
        cout << endl;
    }
    return 0;
}