#include<stdio.h>

int main()
{
	int t, n, i, sum, v;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		sum = 0;
		for(i = 1; i <= n; i++){
			v = i*2 - 1;
			sum += v;
			sum = sum % 10000;
		}
		printf("%d\n", sum);
	}
	return 0;
}
