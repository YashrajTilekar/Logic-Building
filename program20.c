/*Accept Number And Check whether the no. is EVEN or ODD
*/

#include<stdio.h>
#include<stdbool.h>


bool CheckEven(int iNo)
{
   if((iNo%2) == 0)
   {
       return true;
   }
   else
   {
       return false;
   } 
}

int main()
{
    int iValue=0;
    bool bRet = false;

    printf("Enter a Number\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    
    if(bRet == true)
    {
        printf("%d is an EVEN number\n",iValue);
    }
    else
    {
        printf("%d is an ODD number\n",iValue);
    }

    return 0;
}