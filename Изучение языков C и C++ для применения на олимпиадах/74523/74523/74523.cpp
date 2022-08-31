#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main()
{
    map <double, vector<string>> ball;
    int n, mark1, mark2, mark3;
    double avg;
    string name, surname, student;
    cin >> n;
    //cout << ball.max_size();
    for (int i = 0; i < n; ++i) {
        cin >> name >> surname >> mark1 >> mark2 >> mark3;
        student = name + " " + surname;
        avg = (mark1 + mark2 + mark3) / 3.0;
        auto search = ball.find(avg);
        if (search != ball.end()) {
            search->second.push_back(student);
        }
        else {
            vector <string> students;
            students.push_back(student);
            ball.insert({ avg, students });
        }

    }
    auto it = ball.rbegin();
    while (it != ball.rend()) {
        for (auto it2 : it->second) {
            cout << it2 << endl;
        }
        it++;
    }
    return 0;
}