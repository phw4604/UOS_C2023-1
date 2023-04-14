#include <stdio.h>

int max1(int a, int b) { //최소공배수 함수 선언
	int c = a * b; //최소공배수 최대치 변수 할당
	for (int i = 1; i < c + 1; i++) { //i=최소공배수 구하기 위한 변수이고 최소공배수 최대치끼지 반복
		if (i % a == 0 && i % b == 0) { //나머지가 둘 다 0일 때
			printf("%d와 %d의 최소공배수: %d\n", a, b, i); //printf로 최소공배수 출력
			return i; //최소공배수 반환 및 함수 탈출
		}
	}
}

int max2(void) { //최소공배수 함수 안에서 입력 받아서 변수 할당하는 함수
	int a, b, c; //int형 변수 선언
	printf("정수1 입력:");
	scanf_s("%d", &a); //입력 받기
	printf("정수2 입력:");
	scanf_s("%d", &b); //입력 받기
	c = a * b; //최소공배수 최대치 변수 할당
	for (int i = 1; i < c + 1; i++) { //i=최소공배수 구하기 위한 변수이고 최소공배수 최대치끼지 반복
		if (i % a == 0 && i % b == 0) { //나머지가 둘 다 0일 때
			printf("%d와 %d의 최소공배수: %d\n", a, b, i); //printf로 최소공배수 출력
			return i; //최소공배수 반환 및 함수 탈출
		}
	}

}


int min(int a, int b) { //최대공약수 함수 선언
	int c; //최대공약수 최대치 임시변수
	if (a >= b) c = b; //최대공약수 최대치는 작거나 같은 수로 결정
	else c = a;
	for (int i = c; i > 0; i--) { //i는 최대공약수 임시 변수이고 반복문은 역순으로 진행
		if (a % i == 0 && b % i == 0) { //두 수를 i로 나누고 나머지가 0일 때 
			printf("%d와 %d의 최대공약수: %d\n", a, b, i); //최대 공약수 출력
			return i; //최대공약수 반환 및 함수 탈출
		}
	}
}

int min2(void) { //최대공약수 함수 안에서 입력 받아서 변수 할당하는 함수, 과정은 위와 동일
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


int sosu(int a) { //소수 판별 함수 선언
	int b = 0; //b는 공약수의 개수를 지닐 변수 선언
	for (int i = 1; i < a + 1; i++) { //1부터 자기 자신 포함까지 반복문
		if (a % i == 0) { //공약수 판별
			b++; //공약수 개수 증가
		}
	}
	if (b == 2) { //공약수가 2개라면
		printf("%d는 소수입니다.\n", a); //소수판별 출력
	}
	else printf("%d는 소수가 아닙니다.\n", a); //예외처리
	return b == 2; //소수이면 1 return, 소수가 아니면 2 return
}

int sosu1(void) { //소수 판별 함수안에서 입력 받아서 실행하는 함수, 과정은 ㅇ위와 동일
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