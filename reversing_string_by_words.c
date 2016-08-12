#include <stdio.h>
#include<string.h>
int main(void) {
    	int i,l,k,j;
	char a[100];
	scanf("%[^\n]",a);
	l=strlen(a);
	i=l-1;
	while(i>=0)
	{
	   j=i;
	   while(a[i]!=' ')
	   {
	       if(i==0)
	       {
	           break;
	       }
	       i--;
	      continue; 
	   }
	   if(i==0)
	   {
	       for(k=i;k<=j;k++)
	   {
	       printf("%c",a[k]);
	   }
	   }
	   else
	   {
	   for(k=i+1;k<=j;k++)
	   {
	       printf("%c",a[k]);
	   }
	   }
	  printf("\t");
	   i--;
	}
	return 0;
}

