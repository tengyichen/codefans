#include<stdio.h>

int main()
{
	int n, k, i, t;
	while(scanf("%d", &n)!=EOF){
		k = 1;
		for(i = 2; i <= n; i++){
			t = i;
			while(t%10 == 0)
				t /= 10;
			k = k * t;
			
		}
		while(k%10 == 0)
			k /= 10;
		k %= 10;
		printf("%d\n", k);
	}
	return 0;
}
