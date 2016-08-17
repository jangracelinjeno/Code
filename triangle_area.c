#include <stdio.h>
int main(void) {
    int a,b,c,j;
    float s,k,t;
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)*0.5;
    k=s*(s-a)*(s-b)*(s-c);
    t=sqrt(k);
    j=(int)t;
    if(t==j)
    {
        printf("%d",j);
    }
   else 
    {
        printf("%.1f",t);
    }
	return 0;
}

