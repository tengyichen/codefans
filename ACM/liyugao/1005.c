/*9141106 2013-09-10 00:54:51 Accepted 1005 15MS 200K 2005 B GCC sevenyear */

#include <stdio.h>

#define GET_INDEX(i) ((i - 1) % 3)
#define CAL_FN(_A, _B, _FN_1, _FN_2) (((_A) * (_FN_1) + (_B) * (_FN_2)) % 7)

void main() {
	int A, B, n;
	char map[64];
	char trace[50];
	char f[3];
	int i,j,index;

	int a,b;
	int ret = -1;

	while(scanf("%d %d %d", &A, &B, &n) == 3) {		
		if ((A == 0) && (B == 0) && (n == 0)) {
			break;
		}
		if ((n == 1) || (n == 2)) {
			printf("1\n");
			continue;
		}

		a = (A % 7);
		b = (B % 7);
	
		for (i = 0; i < 7; i++) {
			for (j = 0; j < 7; j++) {
				map[(i << 3) | j] = CAL_FN(a, b, i, j);
			}
		}

		f[0] = 1;
		f[1] = 1;

		for (i = 3; (i <= n) && (i <= 3+49); i++) {
			trace[i - 3] = (f[GET_INDEX(i - 1)] << 3) | f[GET_INDEX(i - 2)];
			f[GET_INDEX(i)] = map[trace[i - 3]];
			/*
			printf("i-3=%d, (%d,%d)trace[i-3]=0x%x, map[i-3]=%d\n", 
				i-3, f[GET_INDEX(i - 1)], f[GET_INDEX(i - 2)], trace[i-3], map[trace[i - 3]]);
			*/
		}
		
		index = (i - 1);
		if (n <= (3 + 49)) {
			ret = f[GET_INDEX(n)];
		}
		else {
			for (j = (49 - 1); j >= 0; j--) {
				if (trace[j] == trace[49]) {
					ret = map[trace[((n - (j + 3)) % (49 - j)) + j]];
					break;
				}
			}	
		}
		printf("%d\n", ret);

	}

}
