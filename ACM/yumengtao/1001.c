#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum,i;
    while (scanf("%d",&n)==1)
    {
        if(1 == (n&1))
        {
            sum=((n+1)/2)*n;
        }else
        {
            sum=(n/2)*(n+1);
        }
        printf("%d\n",sum);
        printf("\n");
    }
    return 0;
}