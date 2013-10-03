#include<stdio.h>

int main()
{
	int t, y, n;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &y, &n);
		while(y%4!=0) y++;
		while(n){
			if(y%4==0 && y%100!=0) {n--; y+=4;}
			else if(y%400==0) {n--; y+=4;}
			else y+=4;
		}
		printf("%d\n", y-4);
	}
	return 0;
}
