#include<stdio.h>

int func(int n)
{
	int sum = 0, i;
	sum += (1<<(n-1));
	for(i = n-1; i > 0; i--)
		sum += (1<<(n-1-i))*(1<<(i-1));
	return sum;
}

int main()
{
	int t, n;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		printf("%d\n", func(n));
	}
	return 0;
}
