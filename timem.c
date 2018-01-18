#include <stdio.h>
void main()
{
    int h,m,n;
    scanf("%d",&n);
    if(n%n==0){
    h=n/60;
    m=n%60;
    printf("%d %d",h,m);
    }
}
