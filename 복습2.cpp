#include <stdio.h>
int main()
{
	int age = 17;
	float h = 173.24;
	char sex = 'M';
	char name[10] = "홍길동"; // []는 배열 
	
	printf("나의 정보 >>>>\n나이 : %d\n키 : %.2f\n성별 : %c\n이름 %s", age, h, sex, name);
	
	return 0; //지금은 굳이 필요 없음 
	
}
