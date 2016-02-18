#include <stdio.h>
int main(void)
{
	int start,diff,num,i=0;
	printf("enter the starting number ,total number and the difference:\n");
	scanf("%d %d %d",&start,&num,&diff);
	while(i<num)
    {
	   printf("%d\n",start);
	   start=start+diff;
	   i++;
	}
	return 0;
}
