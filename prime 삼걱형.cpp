#include <stdio.h>
int main()
{
    int primes[32767];
    int count = 0;
    for (int i = 2; i<=10000; i++)
    {
    	int isPrime = 1;
    	for(int j = 2; j < i; j++)
    	{
    		if (i%j==0)
    		{
    			isPrime=0;
    			break;
			}
    		
		}
		if (isPrime)
		{
			primes[count]=i;
			count++;
		}
	}
int row = 1;
int idx = 0;
while(idx + row <= count)
	{
	for(int i = 0; i < row; i++)
	{
		printf("%d ", primes[idx]);
		idx++;
	}
	printf("\n");
	row++;
    }
	return 0;
}
