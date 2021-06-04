#include <stdio.h>
#include <string.h>
int main()
{
	int i,j,len, end;
	char word[50],tmp;
	
	scanf("%s",word);
	len = strlen(word);
	end = len-1;
	for (i=len-1; i>=0; i--) {
		tmp = word[end];
		for (j=end-1; j>=0; j--) {
			word[j+1] = word[j];
		}
		word[0]=tmp;
		printf("%s\n",word);
	}
	
	return 0;
}
