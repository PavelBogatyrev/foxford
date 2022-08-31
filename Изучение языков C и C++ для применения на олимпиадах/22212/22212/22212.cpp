//#include<stdio.h>
//#include <iostream>
void swap(int* x, int* y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
void order(int* a, int* b, int* c) {
    while (!(*a <= *b && *b <= *c)) {
        if (*a > *b) {
            swap(a, b);
        }
        if (*b > *c) {
            swap(b, c);
        }
    }
}
//int main()
//{
//    int a, b, c;
//    scanf_s("%d%d%d", &a, &b, &c);
//    order(&a, &b, &c);
//    printf("%d %d %d\n", a, b, c);
//    return 0;
//}