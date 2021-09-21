#include <iostream>

using namespace std;

int press_num(int h1, int m1, int s1, int h2, int m2, int s2) {

    const int HOURS = 24;
    const int MIN = 60;
    const int SEC = 60;
    int dh=0, dm=0, ds=0;

    if(h1==h2 && m1==m2 && s1==s2)
        return 0;

    if(s2 == s1) {
        ds = 0;
    } else if(s2 < s1) {
        ds = s1-s2;
    } else {
        ds = SEC-s2+s1;
        m2++;
    }

    if(m2 == m1) {
        dm = 0;
    } else if(m2 < m1) {
        dm = m1-m2;
    } else {
        dm = MIN-m2+m1;
        h2++;
    }

    if(h2 == h1) {
        dh = 0;
    } else if(h2 < h1) {
        dh = h1-h2;
    } else {
        dh = HOURS-h2+h1;
    }

    return 4 + dh + dm + ds;

}


int main() {
    int h1=0, m1=0, s1=0;
    int h2=0, m2=0, s2=0;
    int press_min=0;
    int SEC_IN_MIN = 60;
    int MIN_IN_HOUR = 60;
    int SEC_IN_HOUR = SEC_IN_MIN * MIN_IN_HOUR;
    int SEC_IN_DAY = SEC_IN_HOUR * 24;
    int presses[SEC_IN_DAY];

    for(int i=0; i<SEC_IN_DAY; i++) {
        presses[i]=0;
    }

    int watches_num = 0;
    // Ввод количества показаний часов
    scanf("%d", &watches_num);

    for(int k=0; k < watches_num; k++) {
        scanf("%d:%d:%d", &h2, &m2, &s2);
        for(int i=0; i<SEC_IN_DAY; i++) {
            h1 = (i / SEC_IN_HOUR) % 24;
            m1 = (i % SEC_IN_HOUR) / 60;
            s1 = (i % SEC_IN_HOUR) % 60;
            presses[i] += press_num(h1,m1,s1,h2,m2,s2);
        }
    }

    press_min = presses[0];
    for(int i=0; i<SEC_IN_DAY; i++) {
        if(presses[i] < press_min ) {
            press_min = presses[i];
        }
    }

    printf("%d\n", press_min);

    return 0;
}
