#include <stdio.h>
int main(void) {
    int i,n,j,b,k=0,a[100];
    scanf("%d",&n);
    for(b=1;b<=n;b++)
    {
        i=b;
    while(i>0)
    {
        a[k++]=i%2;
        i=i/2;
    }
    for(j=k-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    k=0;
    printf("\n");
    }
	return 0;
}

