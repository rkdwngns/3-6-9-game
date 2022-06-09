#include <stdio.h>
	int main()
	{
	int i;
	int j;
	printf("값의 범위를 입력해주세요.");
		scanf("%d", &j);
	
	for(i=1;i<=j;i++){
	if(i/10==3&& (i%10==3 || i%10==6 || i%10==9))
	printf("짝짝 ");
	else if(i/10==6&& (i%10==3 || i%10==6 || i%10==9))
	printf("짝짝 ");
	else if(i/10==9&& (i%10==3 || i%10==6 || i%10==9))
	printf("짝짝 ");
	else if(i/10==3 || i%10==3 || i%10==6 || i%10==9)
	printf("짝 ");
	else printf("%d ", i);
	}
	return 0;
}
