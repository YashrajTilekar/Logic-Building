#include<stdio.h>

int Addition(int,int);
////////////////////////////////////////////////////////////////////////////////
//Write a program to perform Addition of Two Numbers
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iNo1=0;
    int iNo2=0;
    int iNo3=0;

    printf("Enter First Number\n");
    scanf("%d",&iNo1);
    
    printf("Enter Second Number\n");
    scanf("%d",&iNo2);

    iNo3=Addition(iNo1,iNo2);

    printf("Addition is: %d\n",iNo3);


    return 0;
}