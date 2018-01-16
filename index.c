#include <stdio.h>
void main()
{
    int i,n;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d %d",a[i],i);
        printf("\n");
    }
}
