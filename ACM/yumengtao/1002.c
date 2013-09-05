#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[1001],b[1001],c[1002];

int main(){
    int n,i,j;
    int la,lb,lmax,lmin;
    int count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        count++;
        scanf("%s%s",a,b);
        printf("Case %d:\n",count);
        printf("%s + %s = ",a,b);
        memset(c,0,1002);
        la=strlen(a);
        lb=strlen(b);
        lmax=la>lb?la:lb;
        lmin=la<lb?la:lb;
        if(la>lb){
            memmove(b+la-lb,b,lb);
            memset(b,48,la-lb);
        }else if(la<lb){
            memmove(a+lb-la,a,la);
            memset(a,48,lb-la);
        }
        for(j=lmax-1;j>=0;j--){
            c[j+1]+=(a[j]&15)+(b[j]&15);
            if(c[j+1]>=10){
                c[j+1]-=10;
                c[j]++;
            }
            c[j+1]+='0';
        }
        c[0]+='0';
        if(c[0]&15)
            puts(c);
        else
            puts(c+1);
        if(count<n)
            putchar('\n');
    }
    return 0;
}