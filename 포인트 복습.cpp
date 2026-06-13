#include <stdio.h>

int main() {
    int num = 10;      // 일반 변수
    int *p;          // int형 포인터 변수 선언

    p = &num;        // num의 주소를 p에 저장

    printf("num 값: %d\n", num);
    printf("num 주소: %d\n", &num);
    printf("p 값(주소): %d\n", p);
    printf("p이 가리키는 값: %d\n", *p);
}
