#include <stdio.h>
void add(int * array)
{
    array[3]=array[0]+array[1]+array[2];
    printf("\nthe sum is %d",array[3]);
}
int main(void) 
{
	int array[4],i;
	void add(int *);
	printf("enter the three numbers");
	for(i=0;i<3;i++)
	{
	    scanf("%d",&array[i]);
	}
	add(array);
	return 0;
}

