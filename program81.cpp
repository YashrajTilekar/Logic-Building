//Accept Number from User and find Factorial of that Number

#include<iostream>
using namespace std;

int Factorial(int iNo)
{
    int iCnt = 0 ,iFact = 1;

    for(iCnt = 1 ;iCnt <= iNo ;iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter Number\n";
    cin>>iValue;

    iRet = Factorial(iValue);
    cout<<"Factorial is :"<<iRet<<endl;
    
    return 0;
}