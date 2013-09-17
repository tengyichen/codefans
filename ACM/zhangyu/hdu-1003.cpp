#include<stdio.h>
#include<stdlib.h>

int func(int a[], int n, int *r1, int *r2)
{
	int i, j, tmp, p1, p2, max = -1001;
	for(i = 0; i < n; i++){
		if(a[i] < 0)
		{
			if (max < a[i])	
			{
				max = a[i];
				*r1 = i;
				*r2 = i;
			}
		}
		else 
			break;
	}
	if (i < n)
	{
		*r1 = i;
		*r2 = i;
		p1 = i;
		p2 = i;
		max = a[i];
		tmp = max;
	}
	for(j = i + 1; j < n; j++)
	{
		if (tmp + a[j] >= 0){
			tmp += a[j];
			p2 = j;
			if(tmp > max){
				max = tmp;
				*r1 = p1;
				*r2 = p2;
			}
		}
		else {
			while(++j < n && a[j] < 0);
			if(j == n)
				break;
			tmp = a[j];
			p1 = j;
			p2 = j;
			if(tmp > max){
				max = tmp;
				*r1 = p1;
				*r2 = p2;
			}
		}
	}
	return max;
}

int main()
{
	int t, n, a[100001];
	int i, j, x, y;
	int sum, r1, r2;
	scanf("%d", &t);
	for(i = 0 ; i < t; i++)
	{
		scanf("%d", &n);
		for(j = 0; j < n; j++)
			scanf("%d", &a[j]);
		printf("Case %d:\n", i+1);
		
		sum = func(a, n, &r1, &r2);
		
		printf("%d %d %d\n", sum, r1+1, r2+1);
		if(i + 1 != t)
			printf("\n");
	}
	system("pause");
	return 0;
}
