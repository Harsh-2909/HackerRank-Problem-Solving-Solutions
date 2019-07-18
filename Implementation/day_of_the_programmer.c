#include <stdio.h>
#include <stdlib.h>

//Doing it with HackerRank template code would have made the code more complicated.
int main()
{
    int year;
    int dd=13;
    scanf("%d", &year);
    char* s = malloc(20*sizeof(char));
    if(year==1918)
    {
        dd = 26;
    }
    else if(year<1918)
    {
        if(year%4==0)
            dd=12;
    }
    else{
        if((year%400==0)||((year%4==0)&&(year%100!=0)))
            dd = 12;
    }
    printf("%d.09.%d",dd,year);
    return 0;
}