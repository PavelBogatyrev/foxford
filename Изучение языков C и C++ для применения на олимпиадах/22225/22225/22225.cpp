//#include<stdio.h>
//#include<stdlib.h>
//#include <iostream>
//using namespace std;
void swap(int* x, int* y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
void sort(int* a, int n) {
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = 1; i < n; ++i) {
            if (a[i - 1] > a[i]) {
                swap(&a[i - 1], &a[i]);
                swapped = true;
            }
        }
    }
}

//int main()
//{
//    int n;
//    scanf_s("%d", &n);
//    int* a = (int*)malloc(n * sizeof(int));
//    for (int i = 0; i < n; ++i)
//        scanf_s("%d", &a[i]);
//    sort(a, n);
//    for (int i = 0; i < n; ++i)
//        printf("%d ", a[i]);
//    printf("\n");
//    return 0;
//}