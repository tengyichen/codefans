#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b)
{
	return *(int *)a > *(int *)b ? 1 : -1;
}

int main()
{
	int t, n, res[1000], i;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		for(i = 0; i < n; i++)
			scanf("%d", &res[i]);
		qsort(res, n, sizeof(int), cmp);
		printf("%d", res[0]);
		for(i = 1; i < n; i++)
			printf(" %d", res[i]);	
		printf("\n");
	}
	return 0;
}
