#include<stdio.h>
void main()
{
  int no,rev=0,a;
  printf("Enter the number to be reversed \n");
  scanf("%d",&no);
  a=no;
  
  while(no>0)
  {
    rev=rev*10;
    rev=rev+(no%10);
    no=no/10;
  }
  printf("Reverse of %d is %d",a,rev);
}
