#include<stdio.h>

int main()
{
	int n, v[1000], dp[1000];
	int i, j, max;
	while(1){
		scanf("%d", &n);
		if(!n) break;
		for(i = 0; i < n; i++){
			scanf("%d", &v[i]);
			dp[i] = v[i];
		}
		max = v[0];
		for(i = 1; i < n; i++){
			for(j = 0; j < i; j++){
				if(v[i] > v[j]){
					dp[i] = v[i] + dp[j] > dp[i]?
							v[i] + dp[j] : dp[i];
				}
				max = max > dp[i] ? max : dp[i];
			}
		}
		printf("%d\n", max);
	}
	return 0;
}
