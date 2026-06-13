#include <stdio.h>

int main() {
    int menu;

    printf("메뉴 선택 (1~3): ");
    scanf("%d", &menu);

    switch (menu) {
        case 1:
            printf("김밥 선택\n");
            break;

        case 2:
            printf("라면 선택\n");
            break;

        case 3:
            printf("떡볶이 선택\n");
            break;

        default:
            printf("잘못된 번호입니다.\n");
    }
}
