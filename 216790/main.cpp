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
    // ��������� ������ �������
            delta_time_s = delta_time_h;
            delta_time_m = 0;
            delta_time_h = 0;

    }else if (delta_time_s == -1){
    // �������� ������� � ������
            delta_time_s = delta_time_m;
            delta_time_m = delta_time_h;
            delta_time_h = 0;
    }

//    printf("delta h:%d, delta m:%d, delta s:%d\n", delta_time_h, delta_time_m, delta_time_s );

    //���������� delta_time
    delta_time = delta_time_h  * SEC_IN_HOUR + delta_time_m  * 60 + delta_time_s;
    //���������� ������� ������
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
