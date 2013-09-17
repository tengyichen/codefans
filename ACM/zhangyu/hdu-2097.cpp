#include<stdio.h>

int main()
{
	int n, sum, stmp, tmp, flag;
	while(1){
		scanf("%d", &n);
		if(!n) break;
		flag = 0;
		tmp = n;
		sum = 0;
		while(tmp){
			sum += tmp %10;
			tmp /= 10;
		}
		tmp = n;
		stmp = 0;
		while(tmp){
			stmp += tmp%16;
			tmp /= 16;
		}
		if(sum != stmp){
			flag = 1;
			goto PRINT;
		}
		tmp = n;
		stmp = 0;
		while(tmp){
			stmp += tmp%12;
			tmp /= 12;
		}
		if(sum != stmp)
			flag = 1;
PRINT:
		if(flag == 1)
			printf("%d is not a Sky Number.\n", n);
		else 
			printf("%d is a Sky Number.\n", n);
	}
	return 0;
}
