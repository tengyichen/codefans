#include<stdio.h>

int main()
{
	char num[1001];
	int sum, i;
	while(1){
		scanf("%s", num);
		if(num[0] == '0') break;
		sum = 0;
		for(i = 0; num[i] != '\0'; i++)
			sum += (num[i] - '0');
			
		printf("%d\n", sum%9>0?sum%9:9);
	}
	return 0;
}
