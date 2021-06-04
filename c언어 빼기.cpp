#include <stdio.h>
#include <string.h>
int main()
{
	int len,i,j,a,k;
	char str[100];
	char dap[100];
	scanf("%s",str);
	len = strlen(str);
	
	for (i=len-1; i>=0; i--) {
		
		len = strlen(str);
		k = 0;
		
		
		scanf("%d",&a);
		if (a>=len-1) {
			a=len-1;
			//printf("a=%d\n", a);
		}
		for (j=0; j<=i; j++) {
			if (j!=a-1) {
				printf("%c",str[j]);
				dap[k]=str[j];
				k++;
			}
		}
		if (k==1) {
			break;
		}
		printf("\n");
		strcpy(str, dap);
	}
}
