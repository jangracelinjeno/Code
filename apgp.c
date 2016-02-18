#include <stdio.h>
int main(void)
{
	int start,diff,num,i=0,z;
	printf("enter 0 for AP and 1 for GP\n");
	scanf("%d",&z);
	printf("enter the starting number ,total number and the difference:\n");
	scanf("%d %d %d",&start,&num,&diff);
	if(z==0)
	{
	    while(i<num)
	    {
	        printf("%d\n",start);
	        start=start+diff;
	        i++;
	    }
	}
	else
	{
	    while(i<num)
	    {
	        printf("%d\n",start);
	        start=start*diff;
	        i++;
	    }
	}
	return 0;
}

