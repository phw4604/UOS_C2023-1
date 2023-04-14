#include <stdio.h>
int dtr(int a, int b) { //진법 변환기 함수 선언
    int num = a % b; //
    char moonja; //printf로 문자 출력을 위한 변수 선언
    if (1 < b && b <= 10) { //10진수를 2~10진수로 변환할 때의 조건문
        if (a == 0) { //몫이 0일 때
            return; //함수 탈출
        }
        dtr(a / b, b); //재귀함수를 이용해서 몫이 0이 될 때까지 변환하고자하는 진수로 계속 나누기
        moonja = num % 10 + '0'; //int형 나머지를 문자로 변환
        printf("%c", moonja); //나머지 출력
    }
    else if (10 < b && b< 17) { //10진수를 11~16진수로 변환할 때의 조건문
        if (a == 0) { //몫이 0일 때
            return; //함수 탈출
        }
        dtr(a / b, b);  //재귀함수를 이용해서 몫이 0이 될 때까지 변환하고자하는 진수로 계속 나누기

        if (num < 10) { //나머지가 10보다 작을 때
            moonja = num % 10 + '0'; //int형 나머지를 문자로 변환
            printf("%c", moonja); //나머지 출력
        }
        else { //나머지가 10이상일 때
            moonja = (num - 10) + 'A'; //ASCII코드를 이용한 문자를 변수에 할당
            printf("%c", moonja); //문자 출력
        }

    }

    else printf("2-16 진법이 아닙니다."); //예외처리
}

int main(void) {
    int a, b;
    printf("십진수 정수 입력: ");
    scanf_s("%d", &a); //입력 받기
    printf("변환할 진법 입력 (2-16): ");
    scanf_s("%d", &b); //입력 받기
    dtr(a, b); //함수 실행
}