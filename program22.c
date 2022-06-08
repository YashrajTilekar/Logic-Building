/*
0-35  fail
36-50 pass class
51-60 second class
61-70 first class
71-100 first class with distiction
*/

#include<stdio.h>

void DisplayClass(float fMarks)
{
    if((fMarks >= 0.0) && (fMarks < 35.0))
    {
        printf("Fail\n");
    }
    else if ((fMarks>=35.0) && (fMarks<50.0))
    {
        printf("Pass Class\n");
    }
    else if ((fMarks>=50.0) && (fMarks<60.0))
    {
        printf("Second Class\n");
    }
    else if ((fMarks>=60.0) && (fMarks<70.0))
    {
        printf("First Class\n");
    }
    else if ((fMarks>=70.0) && (fMarks<=100.0))
    {
        printf("First Class With Distinction\n");
    }
    else
    {
        printf("Enter Valid Percentage\n");
    }
    
}

int main()
{
    float fValue=0.0;

    printf("Enter Your Percentage\n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}