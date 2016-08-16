#include <stdio.h>
long int fact(long int);
int main(void) {
	long int n,res;
	scanf("%ld",&n);
	res=fact(n);
	printf("%ld",res);
	return 0;
}
long int fact(long int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
        return n*fact(n-1);
}
