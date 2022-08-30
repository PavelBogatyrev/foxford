#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int temp;
	int a = 0, b = 0, c = 0;
	char d = 0, e = 0;
	float af = a, bf = b, cf = c, result;
	temp = scanf("%d", &a);
	af = a;
	temp = scanf("%c", &d);
	if (temp == -1 || d == '\n') {
		printf("%.6f", af);
		return 0;
	}
	else {
		if (d == '/') {
			temp = scanf("%d", &b);
			bf = b;
			printf("%.6f", af / bf);
			return 0;
		}
		else {
			temp = scanf("%d/%d", &b, &c);
			bf = b;
			cf = c;
			printf("%.6f", af + bf / cf);
			return 0;
		}
	}
}