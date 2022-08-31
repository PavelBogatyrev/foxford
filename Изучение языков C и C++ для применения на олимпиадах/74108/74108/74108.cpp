#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <map>
#define ll long long
using namespace std;

struct person {
    string name;
    ll money;
};

void deposit(vector <person>& persons, string name, int amount) {
    bool found = false;
    for (int i = 0; i < persons.size(); ++i) {
        if (name == persons[i].name) {
            persons[i].money += amount;
            found = true;
        }
    }
    if (found == false) {
        person p;
        p.name = name;
        p.money = amount;
        persons.push_back(p);
    }
}

void deposit(map <string, person>* persons, string name, int amount) {
    auto search = persons->find(name);
    if (search != persons->end()) {
        person p = search->second;
        p.money += amount;
    }
    else {
        person p;
        p.name = name;
        p.money = amount;
        //persons[name] = p;
    }
}

int main()
{
    map <string, person> persons;
    int n;
    int type;
    int money;
    string name;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> type >> name;
        if (type == 1) {
            cin >> money;
            auto search = persons.find(name);
            if (search != persons.end()) {
                search->second.money += money;
            }
            else {
                person p;
                p.name = name;
                p.money = money;
                persons[name] = p;
            }
        }
        else if (type == 2) {
            auto search = persons.find(name);
            if (search != persons.end()) {
                person p = search->second;
                cout << p.money << endl;
            }
            else {
                cout << "ERROR" << endl;
            }
        }
    }
    return 0;
}