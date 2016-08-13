#include <stdio.h>
int main(void) {
    char a[11];
    int i=0,d=0,m=0,y=0;
    scanf("%[^\n]",a);
    while(a[i]!='/')
    {
        d=d*10+a[i]-'0';      //getting date's value in variable d
        i++;
    }
    i++;
     while(a[i]!='/')
    {
        m=m*10+a[i]-'0';      //getting month's value in variable m
        i++;
    }
    i++;
     while(a[i]!='\0')        
    {
        y=y*10+a[i]-'0';      //getting year's value in variable y
        i++;
    }
    if(m>12 || d>31)                   //if months's value > 12 or date's value > 31
    {
        printf("no");                    
    }
    else if(m==2)                  //for leap year
    {
        if(y%400==0 || (y%400!=0 && y%100!=0 && y%4==0))   //condition to check leap year
        {
            if(d<30)                                       //since 29 days in feb of a leap year
            {
                printf("yes");
            }
            else
            {
                printf("no");
            }
        }
        else                                              //for non leap year
        {
            if(d<29)
            {
                printf("yes"); 
            }
            else
            {
                printf("no");
            }
        }
    }
   else if(m==4 || m==6 || m==9 || m==11)                //for months with 30 days
   {
       if(d<31)
       {
           printf("yes");
       }
       else
       {
           printf("no");
       }
   }
    else                                               //for months with 31 days
    {
          printf("yes");
    }
	return 0;
}
