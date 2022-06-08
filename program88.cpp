#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;
    
    public:
        ArrayX(int iValue)
        {   
            this->iSize = iValue;
            Arr = new int[iSize];
        }

        void Accept()
        {
            int iCnt = 0;
            cout<<"Enter the Elements"<<endl;

            for(iCnt = 0 ;iCnt < iSize ;iCnt++)
            {
               cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;

            cout<<"Elements of array are"<<endl;
            for(iCnt = 0 ;iCnt < iSize ;iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }

        int Addition()
        {
            int iCnt = 0, iSum = 0;

            for(iCnt = 0; iCnt < iSize ;iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }

            return iSum;
        }

        ~ArrayX()
        {
            delete []Arr;
        }
};

int main()
{
    int iRet = 0;

    ArrayX aobj1(5);

    aobj1.Accept();
    aobj1.Display();

    iRet = aobj1.Addition();

    cout<<"Addition is :"<<iRet<<endl;

    return 0;
}