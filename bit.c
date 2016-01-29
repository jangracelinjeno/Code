#include <stdio.h>
int main()
{
	int n,bit=0;
	printf("Binary no.:");
	scanf("%d",&n);
	if(n!=0)
	{
	while(n>0)
	{
		n=n/2;
		bit++;
	}
	printf("Bits needed=%d",bit);
	}
	else
	{
	printf("Bit req = 1");
	}
	return 0;
}
