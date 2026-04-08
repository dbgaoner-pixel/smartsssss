#include <stdio.h>
int main()
{
	int x;
	int y;
	printf("구구단을 외자!\n\n");
	for(x = 2; x < 20; x++)
	{
		printf("\n===== %d단 =====\n\n", x);
		for(y = 1; y < 20; y++)
		{
			printf("%d x %d = %d\n", x, y, x * y);
		}
	}
}
