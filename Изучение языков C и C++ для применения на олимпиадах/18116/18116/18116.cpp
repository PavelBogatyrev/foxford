#include<stdio.h>
int main()
{
    int A[4], i;
    char c;
    if (scanf("%d.%d.%d.%d %c", A, A + 1, A + 2, A + 3, &c) != 4)
    {
        printf("NO\n");
        return 0;
    }
    i = 0;
    while (i < 4 && A[i] >= 0 && A[i] <= 255)
        i++;
    if (i == 4)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}