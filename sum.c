#include <stdio.h>
void add(int * array)
{
    array[3]=array[0]+array[1]+array[2];
    printf("\nthe sum is %d",array[3]);
}
int main(void) 
{
	int array[4],var1,var2,var3;
	void add(int *);
	printf("enter the three numbers");
	scanf("%d %d %d",&var1,&var2,&var3);
	array[0]=var1;
	array[1]=var2;
	array[2]=var3;
	add(array);
	return 0;
}

