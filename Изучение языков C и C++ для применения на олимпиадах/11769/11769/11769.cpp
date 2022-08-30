#include <iostream>
using namespace std;

int main()
{
    int year;
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%s", "YES");
    }
    else {
        printf("%s", "NO");
    }
    return 0;
}