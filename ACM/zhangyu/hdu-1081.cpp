#include<stdio.h>

int func(int a[], int n)
{
	int i, j, max = -0xfffffff, sum = 0;
	for(i = 0; i < n; i++)
	{
		if(sum + a[i] <= 0)
			sum = a[i];
		else
			sum += a[i];
		max = max < sum ? sum : max;
	}
	return max;
}

int main()
{
	int n, i, j, k, m, max, submax, arry[100][100], tmp[100];
	while(scanf("%d", &n)!=EOF){
		for(i = 0; i < n; i++)
			for(j = 0; j < n; j++)
				scanf("%d", &arry[i][j]);
		max = -0xfffffff;
	
		for(i = 0; i < n; i++)
			for(j = i; j < n; j++){
				for(k = 0; k < n; k++){
					tmp[k] = 0;
					for(m = i; m <= j; m++)
						tmp[k] += arry[m][k];
				}
				submax = func(tmp, n);
				max = max < submax ? submax:max;
			}
		printf("%d\n", max);
	}
	return 0;
}
