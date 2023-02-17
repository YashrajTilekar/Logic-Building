import java.util.Scanner;

public class program2 
{
    static int[] printOrder(int[] inputList, int num)
    {
        int n = inputList.length;
        int len1 = num, len2 = n - num;
        int[] arr1 = new int[num];
        int[] arr2 = new int[n - num];
 
        // Store the k elements in an array
        for (int i = 0; i < k; i++)
            arr1[i] = arr[i];
 
        // Store the remaining n-k elements in an array
        for (int i = k; i < n; i++)
            arr2[i - k] = arr[i];
 
        // sorting the array1 from 0 to k-1 places
        Arrays.sort(arr1, 0, k);
 
        // sorting the array2 from 0 to n-k places
        Arrays.sort(arr2, 0, n - k);
 
        // storing the values in the final array arr
        for (int i = 0; i < n; i++) {
            if (i < k)
                arr[i] = arr1[i];
 
            else {
                arr[i] = arr2[len2 - 1];
                len2--;
            }
        }
        // printing the array
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
    
    public static int[] prodDelivery(int[] orderID)
    {
        int[] answer = new int[orderID.length];

        int iSum = 0;

        for(int iCnt = 0 ; iCnt < orderID.length ; iCnt++)
        {
            iSum = 0;
            while(orderID[iCnt] != 0)
            {
                iSum = iSum + orderID[iCnt]%10;

                orderID[iCnt] = orderID[iCnt]/10;
            }
            answer[iCnt] = iSum ;

        }

        return answer;
    }

    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);

        int iSize = in.nextInt();
        int orderID[] = new int[iSize];

        for(int i = 0 ; i < iSize ; i++)
        {
            orderID[i] = in.nextInt();
        }

        int[] result = prodDelivery(orderID);

        for( int i = 0 ; i < result.length ; i++)
        {
            System.out.println(result[i]+" ");
        }

    }
}
