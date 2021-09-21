#include <iostream>

using namespace std;

bool isleap(int year) {
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        return true;
    else
        return false;
}

int main() {
    const int MONTHS_SIZE = 12;
    int months[MONTHS_SIZE] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, month, day, weekday, start_year;
    scanf("%d", &start_year);
    weekday = 1;
    year = start_year;

    while(true) {
        if(isleap(year)) {
            months[1] = 29;
        } else {
            months[1] = 28;
        }
        for(month = 0; month < MONTHS_SIZE; month++) {
            for(day = 1; day <= months[month]; day++) {
                if (weekday == 8) {
                    weekday = 1;
                }
                if(month == 0 && day == 1 && weekday == 1 && (isleap(year) == isleap(start_year)) && year != start_year) {
                    printf("%d\n", year);
                    return 0;
                }
                weekday++;
            }
        }
        year++;
    }
    return 0;
}
