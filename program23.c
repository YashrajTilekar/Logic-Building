/* 
1 gram-4000
2 gram-8000
5 gram-20,000
10 gram-40,000
 */

#include<stdio.h>

void Jewelers(int iWeight)
{
    switch(iWeight)
    {
        case 1:
            printf("Your Bill Amount is 4,000/- \n");
            break;

        case 2:
            printf("Your Bill Amount is 8,000/- \n");
            break;

        case 5:
            printf("Your Bill Amount is 20,000/- \n");
            break;

        case 10:
            printf("Your Bill Amount is 40,000/- \n");
            break;

        default:
            printf("Invalid Weight \n");
    }
}

int main()
{
    int iValue=0;
    printf("Enter the Gold Coin Size that you want to Purchase\n");
    scanf("%d" ,&iValue);

    Jewelers(iValue);

    return 0;
}