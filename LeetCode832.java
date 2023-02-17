class Solution 
{
    public int[] ReverseArray(int Arr[])
    {
        int N = Arr.length;
        int iTemp = 0;

        for(int i = 0 , j = N-1 ;i < j ;i++ ,j--)
        {
            System.out.printf("Arr[i] = %d | Arr[j] = %d\n",Arr[i],Arr[j]);
            iTemp = Arr[i];
            Arr[i] = Arr[j];
            Arr[j] = iTemp;         
        }

        return Arr;
    }

    public int[][] flipAndInvertImage(int[][] image) 
    {
        int iTemp = 0 ,iSize = image.length;
        
        for(int iRow = 0 ;iRow < iSize ;iRow++)
        {
            for(int i = 0, j = iSize-1 ;i < j ;i++ ,j--)
            {
                iTemp = image[iRow][i];
                image[iRow][i] = image[iRow][j];
                image[iRow][j] = iTemp;
            }
        }

        for(int i = 0 ;i < iSize ;i++)
        {
            for(int j = 0 ;j < iSize ;j++)
            {
                if(image[i][j] == 0)
                {
                    image[i][j] = 1;
                }
                else if(image[i][j] == 1)
                {
                    image[i][j] = 0;
                }
            }
        }

        return image;
    }
}

public class LeetCode832 
{
    public static void main(String[] args) 
    {
        Solution sobj = new Solution();
       
        int Data[] = new int[]{1,2,3,4,5,6};
        /*int RetArr[] = sobj.ReverseArray(Data);

        for(int iCnt = 0 ;iCnt < RetArr.length ;iCnt++)
        {
            System.out.println(RetArr[iCnt]);
        }*/

        int Data2[][] = new int[][]{{1,1,0,0},{1,0,0,1},{0,1,1,1},{1,0,1,0}};
        
        int RetArr2[][] = sobj.flipAndInvertImage(Data2);

        for(int i = 0 ;i < RetArr2.length ;i++)
        {
            for(int j = 0 ;j < RetArr2.length ;j++)
            {
                System.out.printf("%d\t" ,RetArr2[i][j]);
            }
            System.out.println();
        }

    }    
}
