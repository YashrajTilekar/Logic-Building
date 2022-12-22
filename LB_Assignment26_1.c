#include<stdio.h>
#include<stdlib.h>

char* StrCpyRev(char *cArr)
{
    char ch = *cArr;
    //char* StrRev = (char*)malloc(sizeof(char)*30);

    while(*cArr != '\0')
    {
        cArr++;
    }

    while(*cArr != ch)
    {
        printf("%c" , *cArr);
        cArr--;
    }

    return;

}

int main()
{
    char Arr[30];
    
    printf("Enter a String\n");

    scanf("%[^\n]s" , Arr);

    //printf("%s\n" , Arr);

    char* RetArr = NULL;
    RetArr = StrCpyRev(Arr);
    printf("%s\n",RetArr);

    return 0;
}

