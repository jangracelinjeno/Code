#include <stdio.h>
char* cmpstr(char *,char *,int);
int main(void) {
    char a[100],b[100];
    int x,y;
    scanf("%s",a);
    scanf("%s",b);
    x=strlen(a);
    y=strlen(b);
    if(x!=y)
    {
        printf("Strings are not equal");
    }
    else
    {
        printf("%s",cmpstr(a,b,x));
    }
	return 0;
}
char* cmpstr(char* a,char* b,int x)
{
    int i;
    for(i=0;i<x;i++)
    {
        if(tolower(a[i])!=tolower(b[i]))
        {
            return "Strings are not equal";
        }
    }
    return "Strings are equal";
}

