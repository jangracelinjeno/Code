#include <stdio.h>
#include<string.h>
int main(void) {
    int i=0,pos,j,k,x,y,count;
    char temp[10][100];
	char a[100];
	char b[100];
	gets(a);
	gets(b);
	x=strlen(a);
	while(a[i]!='_')
	{
	    i++;
	}
	pos=i;
	i=0;
	j=0;
    while(b[i]!='\0')
    {
        k=0;
        while(b[i]!=';')
        {
            if(b[i]=='\0')
            {
                i--;
                break;
            }
            temp[j][k]=b[i];
            k++;
            i++;
        }
        temp[j][k]='\0';
        j++;
        i++;
    }
    count=1;
    for(i=0;i<j;i++)
    {
        if(x==strlen(temp[i]))
        {
            for(k=0;k<pos;k++)
            {
                if(a[k]!=temp[i][k])
                {
                    count=0;
                }
            }
            for(k=pos+1;k<x-1;k++)
            {
                if(a[k]!=temp[i][k])
                {
                    count=0;
                }
            }
            if(count==1)
            {
                printf("%s\t",temp[i]);
            }
        }
    }
	return 0;
}

