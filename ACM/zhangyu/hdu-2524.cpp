#include<stdio.h>

int main()
{
	int t, n, m, sum;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &n, &m);
		sum = (n+1)*n/2 * ((m+1)*m/2);
		printf("%d\n", sum);
	}
	return 0;
}
