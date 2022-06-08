#include "header6.h"

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

    if(n1<0)
    {
        n1 = -n1;
    }

    if(n2<0)
    {
        n2 = -n2;
    }

    ians=n1+n2;

    return ians;
}