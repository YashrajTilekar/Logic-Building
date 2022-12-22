#include <stdio.h>
#include <stdlib.h>

void Diet(int Arr[] ,int iSize ,int K)
{
	int iRemaining = 0 ,iCnt = 0;

	for(iCnt = 0 ;iCnt < iSize ;iCnt++)
	{
		if(K <= (Arr[iCnt] + iRemaining))
		{
			Arr[iCnt] = Arr[iCnt] + iRemaining ;
			Arr[iCnt] = Arr[iCnt] - K ;
			iRemaining = Arr[iCnt] ;
		}
		else
		{
			break;
		}
		//printf("Element : %d\n",Arr[iCnt]);
		//printf("Remaining : %d\n",iRemaining);
	}
	if(iCnt == iSize)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No %d\n",iCnt+1);
	}
	//printf("%d\n",iCnt) ;
}

int main(void) 
{
	// your code goes here
	int iLength = 0 ,iProtien = 0 ,iCnt = 0 ,iTests = 0;

	printf("Enter Number of Days\n") ;
	scanf("%d",&iLength) ;

	int *iPtr = (int*)malloc(sizeof(int) * iLength);

	printf("Enter Protein Consumption in grams\n");
	scanf("%d" ,&iProtien) ;

	printf("Enter Elements\n");

	for(iCnt = 0 ;iCnt < iLength ;iCnt++)
	{
		scanf("%d" ,&iPtr[iCnt]);
	}

	Diet(iPtr ,iLength ,iProtien) ;

	return 0;
}

