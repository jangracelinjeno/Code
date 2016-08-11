#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    char *str=(char *)malloc(1000*sizeof(char));
    int res[26]={0},j,flag,i;
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
        {
        if(str[i]==' ')
            {
            continue;
        }
        else
            {
            j=tolower(str[i])-'a';
            res[j]=1;
        }
    }
    flag=1;
    for(i=0;i<26;i++)
        {
        if(res[i]==0)
            {
            flag=0;
        }
    }
    if(flag==0)
        {
        printf("not pangram");
    }
    else
        {
        printf("pangram");
    }
    return 0;
}
