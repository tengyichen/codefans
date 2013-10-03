#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void func(char *a1, char *a2)
{
     int len1, len2, i, j;
     char ch = '0', tmp;

    len1 = strlen(a1);
    len2 = strlen(a2);
	 
	 for(i = len1-1, j = len2-1; i >= 0; i--, j--){
		if (j >= 0)
			tmp = a1[i] + (a2[j] - '0');
		else
			tmp = a1[i];
		if (tmp > '9'){
			a1[i] = tmp - 10;
			if (i - 1 >= 0)
				a1[i-1]++;
			else{
				ch++;	
				break;
			}
		}
		else
			a1[i] = tmp;	
	}
	a1[len1] = '\0';
	a1[len1+1] = '\0';
	 if (ch == '1'){
		for(i = len1; i > 0; i--)
		     a1[i] = a1[i-1];
		a1[0] = ch;	
	}
     return;
}

int main()
{
    char str1[1001], str2[1001];
    int num, i;
    scanf("%d", &num);
    
    for(i=0; i<num; i++)
    {
        scanf("%s %s", str1, str2);
        printf("Case %d:\n", i+1);
        printf("%s + %s = ", str1, str2);
        if (strlen(str1) < strlen(str2)){
			func(str2, str1);
        	printf("%s\n", str2);
		}
        else{
			func(str1, str2);
        	printf("%s\n", str1);
		}
        if(i < num-1)
            printf("\n");
    }
    system("pause");
    return 0;
}
