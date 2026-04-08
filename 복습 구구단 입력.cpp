#include <stdio.h>
int main()
{
	int x;
	int y;
	printf("구구단을 외자!>> ");
	scanf("%d", &y);
	printf("\n===== %d단 =====\n\n", y);
	for(x = 1; x < 20; x++)
	{
		printf("%d x %d = %d\n", y, x, x * y);
	}
}
