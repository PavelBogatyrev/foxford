class currency
{
    int rub;
    int cop;
public:
    currency() {
        rub = 0;
        cop = 0;
    }
    currency(int a) {
        rub = a;
        cop = 0;
    }
    currency(int a = 0, int b = 0) {
        rub = a;
        if (b > 99) {
            rub += b / 100;
            cop = b % 100;
        }
        else {
            cop = b;
        }
    }
    void print() {
        printf("%d-%02d", rub, cop);
    }
};