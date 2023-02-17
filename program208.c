#include<stdio.h>
#include <stdio.h>
 
#define ull unsigned long long int

int decimalToBinary(int N)
{
    // To store the binary number
    ull B_Number = 0;
    int cnt = 0;
    while (N != 0) {
        int rem = N % 2;
        ull c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;
        // Count used to store exponent value
        cnt++;
    }
    return B_Number;
}

int Gap(int iNo)
{
    int binary = decimalToBinary(iNo);
    int ans = 0;

    while(binary != 0)
    {
        int iDigit = binary%10;
        if(iDigit == 1)
        {
            ans++;
        }

        binary = binary/10;
    }

    return ans-1;
}

int main()
{
    int iValue = 0;
    iValue = scanf("%d" , &iValue);
    int iRet = Gap(iValue);
    printf("%d",iRet);

    return 0 ;
}