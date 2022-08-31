#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
#include <string>
using namespace std;
//int stack_min(stack <int> a) {
//    int min = a.top();
//    for (int i = 0; i < a.size(); ++i) {
//        if (a.top() < min) {
//            min = a.top();
//            a.pop();
//        }
//    }
//    return min;
//}

struct p {
    int value, min;
};
int main()
{
    //stack <int> a;
    stack <p> a;
    int n, number, result = 0, min = 0;
    string operation;
    scanf("%d", &n);
    //for (int i = 0; i < n; ++i) {
    //    cin >> operation;
    //    if (operation == "push"){
    //        cin >> number;
    //        a.push(number);
    //    }
    //    else if(operation == "pop") {
    //        a.pop();
    //    }
    //    else if (operation == "min") {
    //        printf("%d\n", stack_min(a));
    //    }
    //}
    for (int i = 0; i < n; ++i) {
        cin >> operation;
        if (operation == "push") {
            p elem;
            cin >> elem.value;
            if (a.empty()) {
                min = elem.value;
                elem.min = elem.value;
            }
            else if (elem.value < min) {
                min = elem.value;
                elem.min = elem.value;
            }
            else {
                elem.min = min;
            }
            a.push(elem);
        }
        else if (operation == "pop") {
            if (!a.empty()) {
                a.pop();
                if (!a.empty()) {
                    min = a.top().min;
                }
            }
        }
        else if (operation == "min") {
            if (!a.empty()) {
                printf("%d\n", a.top().min);
            }
        }
    }
    return 0;
}