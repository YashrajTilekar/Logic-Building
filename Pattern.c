#include<stdio.h>

void Pattern(int iNo)
{
	iNo = iNo * 2 - 1 ;

	for(int i = 0 ;i < iNo ;i++)
	{
		for(int j = 0 ;j < iNo ;j++)
		{
			if(i == j)
			{
				if(i > iNo/2)
				{
					printf("%d  " ,iNo-i);
				}
				else
				{
					printf("%d  ",i+1);
				}
			}
			else if((i+j) == (iNo-1))
			{
				if(i <= j)
				{
					printf("%d  ",i+1);
				}
				else if(i > j)
				{
					printf("%d  ",j+1);
				}
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}

int main()
{
	int iValue = 0 ;
	
	printf("Enter Number\n");
	scanf("%d" ,&iValue);

	Pattern(iValue);

	return 0 ;
}