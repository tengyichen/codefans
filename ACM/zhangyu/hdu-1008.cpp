#include<stdio.h>

int main()
{
	int n, i, f, f0, s[2], sum;
	while(1)
	{
		scanf("%d", &n);
		if(!n) break;
		s[0] = 0;
		s[1] = 0;
		f0 = 0;
		for(i=0; i<n; i++)
		{
			scanf("%d", &f);
			if(f>f0) s[0]+=(f-f0);
			else s[1]+=(f0-f);
			f0 = f;
		}
		sum = 5*n + 6*s[0] + 4*s[1];
		printf("%d\n", sum);
	}
	return 0;
}
