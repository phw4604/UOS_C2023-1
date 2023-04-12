#include <stdio.h>

int max1(int a, int b) {
	int c = a * b;
	for (int i = 1; i < c + 1; i++) {
		if (i % a == 0 && i % b == 0) {
			printf("%d와 %d의 최소공배수: %d\n", a, b, i);
			return i;
		}
	}
}

int max2(void) {
	int a, b, c;
	printf("정수1 입력:");
	scanf_s("%d", &a);
	printf("정수2 입력:");
	scanf_s("%d", &b);
	c = a * b;
	for (int i = 1; i < c + 1; i++) {
		if (i % a == 0 && i % b == 0) {
			printf("%d와 %d의 최소공배수: %d\n", a, b, i);
			return i;
		}
	}

}


int min(int a, int b) {
	int c;
	if (a >= b) c = b;
	else c = a;
	for (int i = c; i > 0; i--) {
		if (a % i == 0 && b % i == 0) {
			printf("%d와 %d의 최대공약수: %d\n", a, b, i);
			return i;
		}
	}
}

int min2(void) {
	int a, b, c;
	printf("정수1 입력:");
	scanf_s("%d", &a);
	printf("정수2 입력:");
	scanf_s("%d", &b);
	if (a >= b) c = b;
	else c = a;
	for (int i = c; i > 0; i--) {
		if (a % i == 0 && b % i == 0) {
			printf("%d와 %d의 최대공약수: %d\n", a, b, i);
			return i;
		}
	}
}


int sosu(int a) {
	int b = 0;
	for (int i = 1; i < a + 1; i++) {
		if (a % i == 0) {
			b++;
		}
	}
	if (b == 2) {
		printf("%d는 소수입니다.\n", a);
	}
	else printf("%d는 소수가 아닙니다.\n", a);
	return b == 2;
}

int sosu1(void) {
	int a;
	int b = 0;
	printf("정수 입력:");
	scanf_s("%d", &a);
	for (int i = 1; i < a + 1; i++) {
		if (a % i == 0) {
			b++;
		}
	}
	if (b == 2) {
		printf("%d는 소수입니다.\n", a);
	}
	else printf("%d는 소수가 아닙니다.\n", a);
	return b == 2;
}