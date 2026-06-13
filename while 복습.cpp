#include <stdio.h>

int main() {
    int num = 0;

    while (num != -1)
	{
        printf("숫자 입력 (-1 입력 시 종료): ");
        scanf("%d", &num);

        printf("입력한 값: %d\n", num);
    }
}
