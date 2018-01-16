#include <stdio.h>

void main(void) {
	// your code goes here
	int a[100],i,j,n,key;
	scanf("%d",&n);
	for(j=1;j<=n;j++){
		scanf("%d",&a[j]);
	}
	for(j=2;j<=n;j++){
		key=a[j];
		i=j-1;
		while(i>0 && key<a[i]){
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=key;
	}
	for(j=1;j<=n;j++){
		printf("%d",a[j]);
	}
}
