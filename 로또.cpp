#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int lotto[6], i, j, k;
	srand(time(NULL));
	
	for(k=0; k<10; k++)
	{
		for(i=0; i<10; i++)
		{
			lotto[i] = rand() % 45 + 1;
			for(j=0;j<i;j++) //중복 체크
			{
				if(lotto[i] == lotto[j])
				{
					i--; //다시뽑기
					break;
				}
		    }
		}
		printf("로또 번호 : ");
		for(i=0;i<6;i++) printf("%d ", lotto[i]);
		printf("\n");
	}
}
