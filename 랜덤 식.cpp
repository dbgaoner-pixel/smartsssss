#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int a, b, answer, user;
	srand(time(NULL));
	a = rand() % 1000 + 1;
	b = rand() % 1000 + 1;
	answer = a+b;
	printf("문제 : %d + %d = ?\n", a, b);
	printf("답 : ");
	scanf("%d", &user);
	if (user == answer) printf("정답");
	else printf("오답");
}
