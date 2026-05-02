#include <stdio.h>

int main()
{
	int num, i;
	
	printf("숫자를 입력하세요 (2~9 ) >> ");
	scanf("%d", &num);
	
	if(num >= 2 && num <= 9)
	{
		for(i=1; i<10; i++)
		{
			if((num*i) % 2 == 0)
			{
				continue;
			}
			printf("%d x %d = %d\n", num, i, num*i);
		}
	}
	else
	{
		printf("잘못된 입력입니다.");
	}
}
