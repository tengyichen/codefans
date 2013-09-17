#include<stdio.h>

typedef unsigned int uint;

uint gcd(uint a, uint b)
{
	if(a%b == 0) return b;
	else return gcd(b, a%b);
}
uint lcm(uint a, uint b)
{
	uint tmp;
	if(b > a) tmp = gcd(b, a);
	else tmp = gcd(a, b);
	return (a/tmp * b);
}

int main()
{
	uint n, m, a, b;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &m);
		a = 1;
		while(m--){
			scanf("%d", &b);
			a = lcm(a, b);
		}
		printf("%d\n", a);
	}
	return 0;
}

