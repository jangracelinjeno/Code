#include <stdio.h>

int main(void) {
    char a[100],b[100],c[100];
    int x,y,k=0,i=0,j=0;
    scanf("%s",a);
    scanf("%s",b);
    x=strlen(a);
    y=strlen(b);
   if(x<=y)
   {
    while(i<x)
    {
        c[k++]=a[i];
        c[k++]=b[i];
        i++;
    }
    while(i<y)
    {
        c[k++]=b[i++];
    }
   }
   else
   {
      while(i<y)
    {
        c[k++]=a[i];
        c[k++]=b[i];
        i++;
    } 
    while(i<x)
    {
        c[k++]=a[i++];
    }
   }
   c[k]='\0';
    printf("%s",c); 
	return 0;
}

