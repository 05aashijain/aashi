#include <stdio.h>
#include<string.h>
void main(void) {
	// your code goes here
	char a[100];
	int i,len,c=0;
	scanf("%s",a);
	len=strlen(a);
	for(i=0;i<len;i++){
		if(a[i]>='0' && a[i]<='9'){
			c=c+1;
		}
	}
	if(c==len)
	{printf("Yes");}
	else{printf("No");}
}
