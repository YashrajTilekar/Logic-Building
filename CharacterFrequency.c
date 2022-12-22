#include<stdio.h>

void Frequency(char * str)
{
    int FreqArr[26] = {0} , iCnt = 0 ;

    /*for(iCnt = 0 ; iCnt < 26 ; iCnt++)
    {
        FreqArr[iCnt] = 0;
    }*/

    while((*str) != '\0')
    {
        FreqArr[*str - 'a'] = FreqArr[*str - 'a'] + 1;

        str++;
    }

    char ch = 'a' ;
    for(iCnt = 0 ; iCnt < 26 ; iCnt++,ch++)
    {
        if(FreqArr[iCnt] >= 1)
        {
            printf("%c - %d \n",ch ,FreqArr[iCnt]);
        }
    }

}

int main()
{
    char cArr[30] ;
    printf("Enter a String with only small case letters\n");
    scanf("%[^'\n']s" ,cArr);
    //printf(cArr,"\n") ;
    
    Frequency(cArr) ;

    return 0 ;
}