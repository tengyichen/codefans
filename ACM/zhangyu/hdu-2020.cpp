#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int cmp(const void *a, const void *b)
{
	int x, y;
	x = abs(*(int *)a);
	y = abs(*(int *)b);
	return x>y?-1:1;
}

int main()
{
	int n, i, a[100];
	while(1){
		scanf("%d", &n);
		if(!n) break;
		for(i = 0; i < n; i++)
			scanf("%d", &a[i]);
			
		qsort(a, n, sizeof(int), cmp);
		printf("%d", a[0]);
		for(i = 1; i < n; i++)
			printf(" %d", a[i]);
		printf("\n");
	}
	return 0;
}
