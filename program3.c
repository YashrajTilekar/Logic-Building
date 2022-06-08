#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//Function Name  :Addition
//Description    :Used to perform Addition of Two Numbers
//Input          :Integer ,Integer
//Output         :Integer
//Date           :12/04/2022
//Author         :Yashraj Tilekar
//
/////////////////////////////////////////////////////////////////////////////////

int Addition(int n1,int n2)
{
    int ians=0;
    ians=n1+n2;

    return ians;
}

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