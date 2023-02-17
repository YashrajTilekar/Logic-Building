#include<stdio.h>



int main()
{
    int a=2 ,b=1 ,c =2 ;
    do
    {
        a = c+1 ;
        b = b+a;
        c %= c+2;
    } while (b < 5);

    printf("%d" ,c);
        
    
    return 0;
}