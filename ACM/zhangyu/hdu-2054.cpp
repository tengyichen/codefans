#include<stdio.h>
#include<string.h>

int main()
{
	char a[15000], b[15000], s1[15000], s2[15000];
	int i, j, len, flag;
	while(scanf("%s %s", a, b)!=EOF){
		flag = 0;
		len = strlen(a);
		i = 0;
		j = 0;
		if(a[i] == '-'){
			s1[j++] = a[i++];
		}else if(a[i] == '+'){
			i++;
		}
		while(a[i] == '0')
			i++;
		while(i < len){
			if(a[i] == '.') flag = 1;
			s1[j++] = a[i++];
		}
		s1[j] = '\0';
		j--;
		while(flag && s1[j] == '0'){
			s1[j--] = '\0';
		}
		if(s1[j] == '.')
			s1[j] = '\0';
		
		flag = 0;
		len = strlen(b);
		i = 0;
		j = 0;
		if(b[i] == '-'){
			s2[j++] = b[i++];
		}else if(b[i] == '+'){
			i++;
		}
		while(b[i] == '0')
			i++;
		while(i < len){
			if(b[i] == '.') flag = 1;
			s2[j++] = b[i++];
		}
		s2[j] = '\0';
		j--;
		while(flag && s2[j] == '0'){
			s2[j--] = '\0';
		}
		if(s2[j] == '.')
			s2[j] = '\0';
			
		printf("%s\n", strcmp(s1,s2)?"NO":"YES");
	}
	return 0;
}
