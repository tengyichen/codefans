#include<stdio.h>

int main()
{
	int x, y, min, max, n, k, i, res;
	while(scanf("%d %d", &x, &y)!=EOF){
		res = 0;
		if(x > y){
			min = y;
			max = x;
		}else{
			min = x;
			max = y;
		}
		for(i = min; i <= max; i++){
			n = i;
			k = 1;
			while(n > 1){
				if(n%2){
					k += 2;
					n = n + (n+1)/2;
				}else{
					n /= 2;
					k++;
				}
			}
			res = res > k ? res:k;
		}
		printf("%d %d %d\n", x, y, res);
	}
	return 0;
}
