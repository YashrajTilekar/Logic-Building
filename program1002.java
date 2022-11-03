public class program1002 
{
  public static int testFunction(int[] nums)
  {
    int finalCount = nums.length/2;

    for(int num : nums)
    {
      int count = 0;
      for(int elem : nums)
      {
        if(elem == num)
        {
          count = count+1;
        }
      }
      if(count>finalCount)
      {
        return num;
      }
      
    }
    return -1;

  }

  public static void main(String[] args) {
    int Arr[] = {2,2,1,1,1,2,2,1,2,1};
    int Ret = testFunction(Arr);
    System.out.println(Ret);
  }  
}
