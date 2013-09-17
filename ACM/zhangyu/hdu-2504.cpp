#include<stdio.h>

int gcd(int a, int b)
{
	if(a%b)
		return gcd(b, a%b);
	else return b;
}

int main()
{
	int n, a, b, c, res;
	scanf("%d", &n);
	while(n--){
		scanf("%d %d", &a, &b);
		if(a < b)
			c = gcd(b, a);
		else c = gcd(a, b);
		res = c;
		if(res == b)
			res = 2 * c;
		while(b != gcd(a, res))
			res += c;
		printf("%d\n", res);
	}
	return 0;
}
