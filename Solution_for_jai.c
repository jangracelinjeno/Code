#include <stdio.h>
int main(void) {
    char a[100];
    int b[1000],c[1000];
    int i=0,j=0,ct=0,p,max,k=0;
    gets(a);
    while(a[i]!='\0')
    {
        b[j]=0; 
        while(a[i]!=' ')
        {
            if(a[i]=='\0')
            {
                i--;
                break;
            }
            else
            {
                b[j]=b[j]*10+a[i]-'0';
                i++;
            }
        }
        i++;
        j++;
    }
    i=0;
    while((i+1)<j)
    {
        if(b[i]>b[i+1])
        {
            ct++;
            p=0;
            while(b[i]>b[i+1])
            {
                p++;
                i++;
                if((i+1)>=j)
                {
                    break;
                }
            }
             c[k++]=p;
        }
            i++;
           }
    max=c[0];
    for(i=0;i<k;i++)
    {
       if(c[i]>max)
       {
           max=c[i];
       }
    }
    printf("Number of decreasing repititions = %d.\nMaximum number of consecutive decreasing elements = %d.",ct,max);
	return 0;
}
