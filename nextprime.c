#include<stdio.h>
void main()
{
    int i,number;
    printf("Enter a number");
    scanf("%d",&number);
    number=number+1;
    for(i=2;i<=number/2;i++)
    {
        if(number%i==0)
        {
            number++;
            i=2;
        }
    }
    printf("\nThe next prime is %d\n",number);
}
