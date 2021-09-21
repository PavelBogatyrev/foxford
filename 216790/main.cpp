/**

Таймер - это часы, которые умеют подавать звуковой сигнал по прошествии некоторого периода времени. Напишите программу, которая определяет, когда должен быть подан звуковой сигнал.

Входные данные
В первой строке входного файла записано текущее время в формате ЧЧ:ММ:СС (с ведущими нулями). При этом оно удовлетворяет ограничениям: ЧЧ - от  до , ММ и СС - от  до . Во второй строке записан интервал времени, который должен быть измерен. Интервал записывается в формате Ч:М:С (где Ч, М и С - от  до , без ведущих нулей). Дополнительно если Ч= (или Ч= и М=), то они могут быть опущены. Например,  на самом деле означает  минут  секунд, что то же самое, что  или . А  обозначает  секунды.  -  часов,  минут,  секунд, что то же самое, что .

Выходные данные
В выходной файл выведите в формате ЧЧ:ММ:СС время, во сколько прозвучит звуковой сигнал. При этом если сигнал прозвучит не в текущие сутки, то дальше должна следовать запись +<кол во> . Например, если сигнал прозвучит на следующий день – то .

 */


#include <iostream>
using namespace std;

int main()
{
    int SEC_IN_MIN = 60;
    int MIN_IN_HOUR = 60;
    int SEC_IN_HOUR = SEC_IN_MIN*MIN_IN_HOUR;
    int SEC_IN_DAY = SEC_IN_HOUR*24;
//    printf("%d %d %d %d", SEC_IN_MIN, MIN_IN_HOUR, SEC_IN_HOUR, SEC_IN_DAY);
    int h, m, s, original_time = 0, alarm_time = 0;
    int delta_time, delta_time_h = -1, delta_time_m = -1, delta_time_s = -1;
    int alarm_time_h = 0, alarm_time_m = 0, alarm_time_s = 0, extra_days = 0;
    //Input original_time
    scanf("%d:%d:%d", &h, &m, &s);
    original_time = h * SEC_IN_HOUR + m * SEC_IN_MIN + s;
    //#Delta time input
    scanf("%d:%d:%d", &delta_time_h, &delta_time_m, &delta_time_s);
    if (delta_time_m == -1 && delta_time_s == -1){
    // Полоучены только секунды
            delta_time_s = delta_time_h;
            delta_time_m = 0;
            delta_time_h = 0;

    }else if (delta_time_s == -1){
    // Получены секунды и минуты
            delta_time_s = delta_time_m;
            delta_time_m = delta_time_h;
            delta_time_h = 0;
    }

//    printf("delta h:%d, delta m:%d, delta s:%d\n", delta_time_h, delta_time_m, delta_time_s );

    //Вычисление delta_time
    delta_time = delta_time_h  * SEC_IN_HOUR + delta_time_m  * 60 + delta_time_s;
    //Вычисоение времени звонка
    alarm_time = original_time + delta_time;
    alarm_time_h = (alarm_time / SEC_IN_HOUR) % 24;
    alarm_time_m = (alarm_time % SEC_IN_HOUR) / 60;
    alarm_time_s = (alarm_time % SEC_IN_HOUR) % 60;
    extra_days = alarm_time / SEC_IN_DAY;
    if (extra_days == 0){
        printf("%02d:%02d:%02d", alarm_time_h, alarm_time_m, alarm_time_s);
    }
    else{
        printf("%02d:%02d:%02d+%d days", alarm_time_h, alarm_time_m, alarm_time_s, extra_days);
    }
    return 0;
}
