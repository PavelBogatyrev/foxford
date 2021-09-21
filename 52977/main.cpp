#include <iostream>
using namespace std;

int main()
{
    int original_time_h, original_time_m, original_time_s, original_time;
    int delta_time_h, delta_time_m, delta_time_s, delta_time;
    const int SIZE = 10; //объ€вл€ем константу
    const int DIGITS_SIZE = 6; //объ€вл€ем константу
    const int SEC_IN_MIN = 60;
    const int SEC_IN_HOUR = SEC_IN_MIN * 60;

    int counters[SIZE]; //объ€вл€ем массив с количеством элементов SIZE
    int digits[6]; //объ€вл€ем массив с количеством элементов SIZE
    for(int k = 0; k<SIZE; k++)
    {
        counters[k] = 0;
    }
    for(int k = 0; k<DIGITS_SIZE; k++)
    {
        digits[k] = 0;
    }
    int h, m, s;
//Debug only
    scanf("%d:%d:%d", &original_time_h, &original_time_m, &original_time_s);
    scanf("%d:%d:%d", &delta_time_h, &delta_time_m, &delta_time_s);
    original_time = original_time_s + original_time_m * SEC_IN_MIN + original_time_h * SEC_IN_HOUR;
    delta_time = delta_time_s + delta_time_m * SEC_IN_MIN + delta_time_h * SEC_IN_HOUR;
    for(int i = original_time; i <= delta_time; i++)
    {
        h = i / SEC_IN_HOUR;
        m = i % SEC_IN_HOUR / SEC_IN_MIN;
        s = i % SEC_IN_HOUR % SEC_IN_MIN;
//        printf("%d:%d:%d\n", h, m, s);
        digits[0] = h / 10;
        digits[1] = h % 10;
        digits[2] = m / 10;
        digits[3] = m % 10;
        digits[4] = s / 10;
        digits[5] = s % 10;
        for(int j = 0; j < DIGITS_SIZE; j++)
        {
            for(int k = 0; k <SIZE; k++)
            {
                if(digits[j] == k)
                {
                    counters[k]++;
                }
            }
        }
    }
    // ¬ывод счетчиков
    for(int m = 0; m < SIZE; m++)
    {
        printf("%d\n", counters[m]);
    }
    return 0;
}
