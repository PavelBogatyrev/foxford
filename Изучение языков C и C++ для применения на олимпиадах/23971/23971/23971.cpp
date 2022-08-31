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
    currency(int a, int b) {
        rub = a;
        cop = b;
    }
};