#include <stdio.h>

int main() {
    int num;

    do
	{
        printf("1~10 사이 숫자 입력: ");
        scanf("%d", &num);
        if (num > 10)
        {
        	printf("1~10 사이가 아니에요!\n");
		}
    }
	while (num < 1 || num > 10);

    printf("입력한 숫자: %d\n", num);

    return 0;
}
